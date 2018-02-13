# Challenge Two: Chinese Zodiac
---
If you have gone to a Chinese restaurant, you have most likely seen a message such as "if you are a horse, you would get along best with a dog or a tiger, but you should avoid the rat".</br>

In the Chinese Zodiac, each year is associated with one of 12 animals, and you determine your type of personality by getting the animal associated with your year of birth. Here is a list of these animals and some of their matching years: </br>

- Rat: 1984,1996,2008</br>
- Ox: 1985, 1997, 2009</br>
- Tiger: 1986, 1998, 2010</br>
- Rabbit: 1987, 1999, 2011</br>
- Dragon: 1988, 2000, 2012</br>
- Snake: 1989, 2001, 2013</br>
- Horse: 1990, 2002, 2014</br>
- Goat: 1991, 2003, 2015</br>
- Monkey: 1992, 2004, 2016</br>
- Rooster: 1993, 2005, 2017</br>
- Dog: 1982, 1994, 2006</br>
- Pig: 1983, 1995, 2007</br>

The compatibility between people follows a simple rule: one animal is compatible with the other animals that are 4 "steps" apart, while the opposite animal(i.e., 6 "steps") is the incompatible one. The compatibility with other animals than those is not determined. So for example, someone born in 1998 (Tiger) will get along very well with someone born in 1994 (Dog) or born in 2014 (Horse), but will not be compatible with someone born in 2004 (Monkey).</br>

You should write a program tht identifies the animal associated with two people and indicate their compatibility. This should be done for 4 pairs of people. More specifically, the input contains one line per pair of people (so 4 lines in total). Each line contains 2 years from the lists above (i.e., two number between 1982 and 2017 inclusively), separated by a space. The ouput should have 2 lines per pair of people. (i.e., 2 lines for each of the lines in input, for a total of 8 lines). The first of these 2 lines should contain the animal corresponding to each of these two years, in the same order, and separated by a space. Make sure that you capitalize only the first letter of the animal name. The second line shoould contain one of the 3 possible compatibility outcomes, according to the rule description above: "compatible", "not compatible" or "not determined" (all lower case, and without the double quotes).</br>

EXAMPLE INPUT:</br>
1998 2004</br>
1984 2009</br>
2006 2002</br>
2017 2017</br>

EXAMPLE OUTPUT:</br>
Tiger Monkey</br>
not compatible</br>
Rat Ox</br>
not determined</br>
Dog Horse</br>
compatible</br>
Rooster Rooster</br>
not determined</br>