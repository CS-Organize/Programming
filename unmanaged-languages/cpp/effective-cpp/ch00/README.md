# Chapter 00

## Declaration
```cpp
extern int x; // 객체 선언

std::size_t numDigits(int number); // 함수 선언
std::size_t (int) // 함수 signature, 매개변수와 반환 타입만을 나타낸다.

class Widget; // 클래스 선언

template<typename T> // 템플릿 선언
class GraphNode;
```
- 코드에 사용되는 어떤 대상의 이름과 타입을 컴파일러에게 알려주는 것
- 구체적인 세부사항은 선언에 포함되지 않는다.
- 함수의 반환하는 타입과 매개변수의 타입을 `Signature`라고 한다.

## Definition
```cpp
int x; // 객체 정의

std::size_t numDigits(int number) // 함수 정의
{
    std::size_t digitsSoFar = 1;
    while ((number /= 10) != 0) {
        ++digitsSoFar;
    }
    return digitsSoFar;
}

class Widget // 클래스 정의
{
public:
    Widget();
    ~Widget();
};

template<typename T> // 템플릿 정의
class GraphNode
{
public:
    GraphNode();
    ~GraphNode();
};
```
- 선언에서 빠진 구체적인 세부사항을 컴파일러에게 제공하는 것

## Initialization
- 어떤 객체에 최초의 값을 부여하는 과정

### Constructor
- 사용자 정의 타입으로 생성한 객체의 경우, 초기화는 생성자에 의해 이루어진다.

#### Default Constructor
- 매개변수가 없는 생성자
- 원래부터 매개변수가 없거나 모든 매개변수가 기본 값을 갖고 있으면 기본 생성자가 될 수 있다.

#### `explicit` 
- 생성자 앞에 붙여서, 프로그래머가 예상하지 못하는 암시적 변환을 금지시킨다.
- 명시적 타입 변환만 허용한다.

### Copy Constructor
- 어떤 객체 초기화를 위해 같은 타입의 다른 객체를 사용하는 생성자

### Copy Assignment Operator
- 어떤 객체에 다른 객체의 값을 복사하는 연산자

## STL 
- Standard Template Library
- Container, Algorithm 및 이들과 관련된 기능들이 집결한 결정체

## Interface
- 함수의 signature, 어떤 클래스의 접근 가능 요소같은 일반적인 설계 아이디어
