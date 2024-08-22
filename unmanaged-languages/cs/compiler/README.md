# Compiler
소스 파일(\*.c)을 실행 파일(a.out)로 변환하는 과정을 컴파일(Compile)이라고 합니다.

## Preprocessing:
```bash
cc -E hello.c -o hello.ii
```
- hello.c 파일은 C++ 전처리기에 의해 전처리됩니다.
- 전처리된 코드는 hello.ii 파일에 저장됩니다.

## LLVM 비트코드 생성:
```bash
clang -S -emit-llvm -c hello.c -o hello.bc
```
- 전처리된 코드가 LLVM 컴파일러에 의해 LLVM 비트코드로 변환됩니다.
- LLVM 비트코드는 hello.bc 파일에 저장됩니다.

## Compilation:
```bash
cc -S hello.c -o hello.s
```
- LLVM 비트코드가 목적 코드로 컴파일되어 생성된 어셈블리 코드는 hello.s 파일에 저장됩니다.

## Assembly:
```bash
cc -c hello.s -o hello.o
```
- 어셈블리어 코드가 어셈블러에 의해 목적 코드로 변환됩니다.
- 목적 코드는 hello.o 파일에 저장됩니다.

## Linking:
```bash
cc hello.o -o hello
```
- 여러 목적 코드가 링커에 의해 하나의 실행 파일로 연결됩니다.
- 최종 실행 파일은 a.out로 저장됩니다.

