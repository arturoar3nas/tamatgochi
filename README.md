# Tamagotchi

## Brief

## Tools

### Clang Format
```sh
clang-format -style=llvm -i <sourcefile>.cpp <sourcefile>.hpp
```
### Clang Tidy
```sh
clang-tidy -checks='modernize-*' <sourcefile>.cpp -- -std=c++11
```
or add -fix command for apply suggested fixes
