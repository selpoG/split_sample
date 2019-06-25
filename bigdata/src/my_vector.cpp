#include "my_vector.hpp"
#include <sstream>
#include "bigdata_io.hpp"
// std::basic_ostream<char, std::char_traits<char>>& operator<< <30, char, std::char_traits<char>>(
//    std::basic_ostream<char, std::char_traits<char>>& os, const big_data<30>& z);
// ここで
// std::ostringstream& operator<<(std::ostringstream& os, const big_data<30>& z)
// の実体化がされているつもり
std::string my_vector::str() const
{
	std::ostringstream oss;
	for (auto& it : a) hoge(oss, it) << ", ";
	for (auto& it : a) oss << it << ", ";
	return oss.str();
}
