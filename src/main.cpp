#include <iostream>
#include <json.hpp>
#include <muduo/net/TcpServer.h>
#include <muduo/net/EventLoop.h>
#include <muduo/net/TcpConnection.h>
#include <muduo/base/Logging.h>
#include <chatServer/chatServer.hpp>

using namespace muduo;
using namespace muduo::net;


int main() {
 
  LOG_INFO << "Chat Server Starting...";
  //考虑一下哪些参数需要对外开放设置
  //系统参数（IP，端口，线程池数量，超时时间，日志级别，最大并发量）
  //业务参数（最大连接客户端，消息长度，消息类型）
  
 

}