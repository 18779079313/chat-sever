#ifndef CHATSERVER_HPP
#define CHATSERVER_HPP

#include <iostream>

using namespace muduo;
using namespace muduo::net;

class ChatServer
{
public:
    ChatServer(int threadNum):m_threadNum(threadNum)
    {};
    ~ChatServer();

    void run();

private:
    //处理连接事件
    void handle_accept();
    //处理读事件
    void handle_read();
    //处理写事件
    void handle_write();

    TcpServer *m_chatServer;
    EventLoop *m_loop;
    //设置线程池数量参数
    int m_threadNum;
}












#endif 
