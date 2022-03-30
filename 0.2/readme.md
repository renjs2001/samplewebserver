客户端连接服务端后可以发送消息，服务端收到后返回同样的消息给客户端


对于服务端，使用read对消息进行读取，取read函数返回值为bytes_read，如果bytes_read > 0 则其为消息的长度，如果为-1，则判断发生的错误类型 errno = EINTR，则发生了系统调用中断，则重启系统调用即可，
如果errno = EAGAIN 或者 = EWOULDBLOCK 都表示在非阻塞模式下 无数据可读，即为 数据读取完毕 如果bytes_read = 0则表示EOF 客户端断开连接。此时可以关闭socket 并退出

使用了epoll进行io复用，由于使用了epoll采用了边缘触发ET所以使用了非阻塞socket
具体函数为setnonblocking（）
然后在server.cpp中使用while循环调用Epoll对象的poll函数也就是epoll_wait,返回一个事件数组，然后给根据不同的事件进行处理。


封装成几个类。
sockaddr封装为InetAddress
socket封装为Socket
epoll封装到Epoll