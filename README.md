# samplewebserver
a samplewebserver for pine
主要参考了30dayMakeCppServer [地址](https://github.com/yuesong-feng/30dayMakeCppServer)
也看了tinywebserver [地址](https://github.com/qinguoyi/TinyWebServer)
       webserve    [地址](https://github.com/linyacool/WebServer)
30day 已经停了一段时间，所以在他的基础上，进行修改，和添加功能




## webbench测试
对30daymakecppserver day12 进行修改 支持http 1.0协议 使用webbench进行压测
测试环境 vmware虚拟机 ubuntu20.04 处理器R7-4800H 内存8GB
结果如下
线程池线程数量 ：2线程
![T(Q_TLG`N_XQB{8(_CN4_5R](https://user-images.githubusercontent.com/81097974/160834422-2c348ba6-9476-450b-9e84-e908c1832129.png)

线程池线程数量 ：4线程

![H}CNI@E9)UQEM5BO0J@7BSN](https://user-images.githubusercontent.com/81097974/160834776-79f977e2-1641-4a1a-a2ff-f3d2e04f1483.png)

线程池线程数量 ：8线程

![N% 71DNLSVIBOTX%74_ 7Z6](https://user-images.githubusercontent.com/81097974/160834817-7d0de88e-fc58-4b6e-a81c-bc8d70399ff9.png)

线程池线程数量 ：16线程

![MMTQQP1QQ2N~Q5HA3K8(R2O](https://user-images.githubusercontent.com/81097974/160834864-c623b4b4-4be9-4040-b63e-5ada3bb5bc9f.png)



