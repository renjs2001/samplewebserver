#include <sys/epoll.h>
#include <vector>
#include <iostream>
using namespace std;
int main(){
    epoll_event event;
    cout<<sizeof(event);
    return 0;
}