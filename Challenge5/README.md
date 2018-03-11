# Challenge Five: Analyzing Extreme Effects
---
Data analytics encompasses the identification of one variable over another one in a larger dataset. For example, one may want to know how the outside temperature is affecting the level of physical activity of people. One problem is that very often, there are many other factors thay may come into play. For our example here, the level of physical activity of people may be affected by other things than the temperature, for example if the person has the flu, or did not have a change to sleep enouogh recently. In this case, we can still detect an effect "at the extreme": we can check for example if on a really hot days, people are getting significantly more or less active than usual. Your goal here is to right a program to perform this kind of "analysis at the extreme".</br>

In particular, you will be analyzing a dataset related to a person who is exercising by running outside. This dataset contains pairs of numbers: the temperature at a certain time, and the speed of the runner at that time. We are interested to see if the runner is typicaly running faster or slower on really hot days(or really cold days).</br>

The first line of input provides the thresholds to be used, for considering some values as "extreme". These are specified as 4 positive integers, seperated by a space. The first two numbers represent the threshold for the temperature. In our example input below, it means the temperatures below 20 degrees are considered "really cold" and temperatures about 30 degrees are considered "really hot". The last two numbers are the threshold for the speed. Looking again at the example input below, a speed slower than 12 km/h is considered "really slow" while a speed higher than 15 km/h is considered "really fast".</br>

The rest of the input contains the actual data. First, you have a value N (positive integer on its own line), indicating the number of entries in the dataset. then there are N lines, containing two positive integers seperated by a space: the first one is the temperature, and the second one is the speed. As the dataset is being read, you should keep track of following counts: </br>
- Number of times where the speed was really fast on a really hot day</br>
- Number of times where the speed was really slow on a really hot day</br>
- Number of times where the speed was really fast on a really cold day</br>
- Number of times where the speed was really slow on a really cold day</br> 

Your output should contain those 4 counts, one per line in thsi order. In the example below, you will see thay the runner being analyzed is generally affected negatively by the heat, but is not really affected by the cold(same number of "fast" than number of "slow").</br>