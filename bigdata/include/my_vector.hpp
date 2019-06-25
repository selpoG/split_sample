#ifndef MY_VECTOR_HPP
#define MY_VECTOR_HPP

#include <string>
#include <vector>
#include "bigdata.hpp"

// big_data<sz_> は基本的には my_data を通してしか用いない
constexpr unsigned _size = 30;
using my_data = big_data<_size>;
struct my_vector
{
	std::vector<my_data> a{3};
	std::string str() const;
};

#endif
