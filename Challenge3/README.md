# Challenge Three: Lucky Numbers
---
A number is considered a lucky one if the sum of its digits, as well as the sum of the square of its digits, are prime numbers. For example, the number 120 is lucky because the sum of its digits (i.e. 1+2+0) is 3, a prime number, and the sum of the square of its digits (i.e.,(1x1)+(2x2)+(0x0)) is 5, which is also a prime number.</br>

We would like to know how many lucky numbers are in an interval between two given numbers X and Y. You should write a program to count this. The first line of input is a positive integer T, indicating the number of intervals to be tested. Then, there are T lines (one per interval) containing 2 positive integers (X and Y), seperated by a space. Note that the first number will always be smaller or equal to the second number</br>

Constraint: 1 <= X <= Y <= 10^9</br>

The output of your program should display only one number per interval: the count of lucky numbers found within that interval.</br>

In the example below, there are 2 intervals to be tested. In the first one (between 1 and 20 inclusively), there are 4 lucky numbers: 11,12,14, and 16. In the second one (from 120 to 130), there is only one lucky number: 120.</br>

EXAMPLE INPUT:</br>
2</br>
1 20</br>
120 130</br>

EXAMPLE OUTPUT:</br>
4</br>
1</br>