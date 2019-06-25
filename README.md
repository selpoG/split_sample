# sample

Visual Studio 2019 では正常にビルドできる.

wsl (ubuntu: 16.04.6 LTS, gcc 7.4.0) で
`cmake .. -DCMAKE_CXX_COMPILER=g++74 -DCMAKE_C_COMPILER=gcc74` としてから `make` すると,
以下のようなエラーが出る.

```sh
Scanning dependencies of target bigdata
[ 25%] Building CXX object bigdata/CMakeFiles/bigdata.dir/src/my_vector.cpp.o
[ 50%] Linking CXX static library libbigdata.a
[ 50%] Built target bigdata
Scanning dependencies of target main
[ 75%] Building CXX object main/CMakeFiles/main.dir/src/main.cpp.o
[100%] Linking CXX executable main
../bigdata/libbigdata.a(my_vector.cpp.o): 関数 `my_vector::str[abi:cxx11]() const' 内:
my_vector.cpp:(.text+0x136): `std::basic_ostream<char, std::char_traits<char> >& operator<< <char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, big_data<30u> const&)' に対する定義されていない参照です
collect2: エラー: ld はステータス 1 で終了しました
main/CMakeFiles/main.dir/build.make:84: ターゲット 'main/main' のレシピで失敗しました
make[2]: *** [main/main] エラー 1
CMakeFiles/Makefile2:145: ターゲット 'main/CMakeFiles/main.dir/all' のレシピで失敗しました
make[1]: *** [main/CMakeFiles/main.dir/all] エラー 2
Makefile:83: ターゲット 'all' のレシピで失敗しました
make: *** [all] エラー 2
```

wsl (ubuntu: 18.04,2 LTS, clang: 7.0.0-3~ubuntu0.18.04.1) で
`cmake .. -DCMAKE_CXX_COMPILER=clang++-7 -DCMAKE_C_COMPILER=clang-7` としてから `make` しても,
同様に以下のようなエラーが出る.

```sh
Scanning dependencies of target bigdata
[ 25%] Building CXX object bigdata/CMakeFiles/bigdata.dir/src/my_vector.cpp.o
[ 50%] Linking CXX static library libbigdata.a
[ 50%] Built target bigdata
Scanning dependencies of target main
[ 75%] Building CXX object main/CMakeFiles/main.dir/src/main.cpp.o
[100%] Linking CXX executable main
../bigdata/libbigdata.a(my_vector.cpp.o): 関数 `my_vector::str[abi:cxx11]() const' 内:
my_vector.cpp:(.text+0x199): `std::basic_ostream<char, std::char_traits<char> >& operator<< <char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, big_data<30u> const&)' に対する定義されていない参照です
clang: error: linker command failed with exit code 1 (use -v to see invocation)
main/CMakeFiles/main.dir/build.make:84: recipe for target 'main/main' failed
make[2]: *** [main/main] Error 1
CMakeFiles/Makefile2:145: recipe for target 'main/CMakeFiles/main.dir/all' failed
make[1]: *** [main/CMakeFiles/main.dir/all] Error 2
Makefile:83: recipe for target 'all' failed
make: *** [all] Error 2
```
