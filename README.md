# C++ Odd or Even Checker

A simple C++ program that checks whether an integer is odd or even. It supports negative numbers, treats zero as even, validates input, and lets you check multiple numbers until you enter `q`.

## Compile

```bash
g++ -std=c++17 -Wall -Wextra main.cpp -o oddeven
```

## Run

```bash
./oddeven
```

On Windows, run `oddeven.exe` instead.

## Sample session

```text
Enter an integer (or q to quit): 7
Odd
Enter an integer (or q to quit): 10
Even
Enter an integer (or q to quit): 0
Even
Enter an integer (or q to quit): -3
Odd
Enter an integer (or q to quit): -8
Even
Enter an integer (or q to quit): abc
Error: please enter a whole integer.
Enter an integer (or q to quit): q
Goodbye!
```
