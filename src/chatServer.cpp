#include "chatServer.hpp"
#include<net/TcpServer.h>
#include<net/EventLoop.h>

using namespace muduo;
using namespace muduo::net;
ChatServer::ChatServer(int threadNum)
{
   m_loop = new EventLoop();
   //创建一个TCPserver对象
   m_chatServer = new TcpServer(m_loop, InetAddress(8888), "ChatServer");
   //设置回调函数
   m_chatServer->setConnectionCallback(std::bind(&ChatServer::handle_accept, this));
   m_chatServer->setMessageCallback(std::bind(&ChatServer::handle_read, this));
   m_chatServer->setWriteCompleteCallback(std::bind(&ChatServer::handle_write, this));
   
   m_chatServer->setThreadNum(m_threadNum);
   
}

ChatServer::~ChatServer()
{
}

void ChatServer::run()
{
    m_chatServer->start();
}

void ChatServer::handle_accept()
{
}

void ChatServer::handle_read()
{
}

void ChatServer::handle_write()
{
}
