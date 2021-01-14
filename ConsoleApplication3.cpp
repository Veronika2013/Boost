#include <iostream>
#include <istream>
#include <ostream>
#include <string>
#include <boost/thread.hpp>
#include <boost/bind.hpp>
#include <boost/asio.hpp>
using namespace boost::asio;
io_service service;
void dataSci()
{
	ip::tcp::resolver resolver(service);
	ip::tcp::resolver::query query("www.vk.com", "80");
	ip::tcp::resolver::iterator iter = resolver.resolve(query);
	ip::tcp::endpoint ep = *iter; 
	std::cout << ep.address().to_string() << std::endl;
	std::cout << ep.data() << std::endl;
	std::cout << ep.protocol().v4 << std::endl;
	std::cout << ep.size() << std::endl;
}
void asio_proto()
{

}
int main(int argc, char* argv[]) {
	dataSci();

}