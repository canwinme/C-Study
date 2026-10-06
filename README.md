# C Study

C 언어를 처음 학습하면서 작성한 예제와 실습 코드를 주제별로 정리한 저장소입니다.

단순 출력과 자료형부터 반복문, 함수, 배열/문자열, 포인터, 동적 메모리까지 학습 흐름에 맞춰 분류했습니다.

> 학습 당시 작성한 코드를 기록 목적으로 보관한 저장소입니다. 일부 파일에는 컴파일 오류, 미완성 코드, 의도적인 오류 실습이 포함되어 있으며 원본 학습 기록을 유지하기 위해 수정하지 않았습니다.

## 📚 학습 내용

- 기본 출력과 변수
- 정수/실수 자료형
- scanf 입력
- const와 저장 클래스
- for / while / do-while 반복문
- if-else / switch 조건문
- 중첩 반복문과 별 출력
- 함수 선언, 호출, 반환값
- 재귀 호출
- 배열과 함수 전달
- 문자열과 문자 배열
- 포인터와 역참조
- 포인터를 이용한 값 교환
- malloc / free 동적 메모리
- 난수를 활용한 로또 번호 실습

## 🗂 폴더 구조

```text
C-Study/
├── 01_basics/
├── 02_control_flow/
├── 03_functions_recursion/
├── 04_arrays_strings/
├── 05_pointers_memory/
└── 06_practice/
```

### 01_basics
C 기본 문법, 출력, 변수, 자료형, 입력을 학습한 예제입니다.

- behappy.c
- happyfriend.c
- helloworld.c
- source.c
- integer.c
- floating.c
- double.c
- const.c
- scanf.c
- scanf2.c
- old_c.c

### 02_control_flow
반복문과 조건문, 중첩 반복문을 연습한 예제입니다.

- forexample.c
- repeat.c
- dowhile.c
- calculate.c
- fault.c
- move.c
- move2.c
- star.c
- diamond.c

### 03_functions_recursion
함수와 재귀 호출을 학습한 예제입니다.

- fuc.c
- recursion.c
- repeat2.c

### 04_arrays_strings
배열, 문자열 입력/출력, 문자열 복사를 학습한 예제입니다.

- array1.c
- array2.c
- recursion2.c
- array3.c
- array4.c
- char.c
- string.c
- strcpy_example.c
- homework.c

### 05_pointers_memory
포인터, 주소/역참조, 값 교환, 동적 메모리를 학습한 예제입니다.

- pointer1.c
- pointer2.c
- swap.c
- swap2.c
- dynamic.c
- dynamic2.c
- dynamic3.c

### 06_practice
학습한 내용을 조합해 작성한 작은 실습 코드입니다.

- lotto.c

## ▶ 실행 방법

GCC 기준으로 각 파일을 개별 컴파일해서 실행할 수 있습니다.

```bash
gcc 01_basics/helloworld.c -o helloworld
./helloworld
```

Windows에서는 생성된 exe 파일을 실행하면 됩니다.

```bash
gcc 01_basics/helloworld.c -o helloworld.exe
helloworld.exe
```

## 📝 학습 기록

이 저장소는 완성된 하나의 프로그램보다 **C 언어 학습 과정 자체를 기록**하는 것을 목적으로 합니다.

기초 문법에서 시작해 반복문과 함수, 배열, 포인터, 동적 메모리 순으로 학습 범위를 확장했으며, 각 예제는 당시 개념을 직접 확인하기 위해 작성했습니다.
