#ifndef MY_BIGDATA_HPP
#define MY_BIGDATA_HPP

// すごく大きなデータ (sz_ は大きさを調整するパラメータ)
template <unsigned sz_>
struct big_data
{
	// あんまり <iostream> を include したくない
	// どうしても include するときは, bigdata.hpp だけでなく, bigdata_io.hpp も include してもらう
	// 入出力関連は bigdata_io.hpp に分離
	template <class CharT, class Traits>
	friend std::basic_ostream<CharT, Traits>& operator<<(std::basic_ostream<CharT, Traits>& os, const big_data<sz_>& z);
};

#endif
