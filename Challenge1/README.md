# Challenge One: Time Converter
---
Time is usually indicated under the 12-hour clock system, meaning that the time is a number from 1 to 12 inclusively, to which we atach "am" or "pm" (e.g., 11am). Of couse, minutes can be specified too (e.g., 11:30am)</br>

However, this is not the international format for time. A formal way of specifying time is to use the 24-hour clock system, where the hour is a number between 0 and 23 (with 0 representing midnight). For example, 3:20pm is 15:20 in the 24-hour system. Such format is used for example in the military or on flight itineraries. Some people have difficulties reading time in this format though, and you decide to write a short program for doing the conversion from the 24-hour clock to the 12-hour clock. For simplicity here, we will only look at the hours, not the minutes.</br>

You should write a program that will perform 3 time conversions. The input consists of 3 whole number between 0 and 23 inclusively, one per line. For each of these number, you should do the conversion and output the result, one per line, in the same order as the input. The example input and output below shows you that 15:00 is in fact 3pm, that 5:00 is 5am, and that 12:00 is 12pm(noon).</br>

EXAMPLE INPUT:</br>
15</br>
5</br>
12</br>

EXAMPLE OUTPUT:</br>
3pm</br>
5am</br>
12pm</br>