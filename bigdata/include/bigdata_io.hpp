#ifndef MY_BIGDATA_IO_HPP
#define MY_BIGDATA_IO_HPP

#include <iostream>
#include "bigdata.hpp"

// 入出力関連の実装
template <unsigned sz_, class CharT, class Traits>
std::basic_ostream<CharT, Traits>& operator<<(std::basic_ostream<CharT, Traits>& os, const big_data<sz_>& z)
{
	return os << "aaa(" << sz_ << ")";
}

template <unsigned sz_, class CharT, class Traits>
std::basic_ostream<CharT, Traits>& hoge(std::basic_ostream<CharT, Traits>& os, const big_data<sz_>& z)
{
	return os << "aaa(" << sz_ << ")";
}

#endif
