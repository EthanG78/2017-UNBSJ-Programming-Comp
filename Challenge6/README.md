# Challenge Six: Maximum Paper Folding
---
Origami is the art of paper folding, where the goal is to transform a flat sheet into some kind of "object" or "sculpture". Some sculpture designs are particularly fancy, and require a large number of folds. One issue is the feasibility of the design: a piece of paper can be folded only a certain number of times before such operation becomes impossible. For example, if you try to fold a regular letter-size piece of paper in half multiple times, you will see that you cannot do this more than 6 or 7 times (depending on how thick your paper is).</br>

For our problem here, you will have to determine the maximum number of times that a given sheet of paper can be folded in half, based on its original dimensions and its thickness. We will assume here that the total thickness of the folded paper should be no more than a third of each of the dimensions. here is an example, for a regular letter-size paper:</br>

|                      | Dimensions      | Thickness |
|----------------------|-----------------|-----------|
| Original dimensions: | 216 mm X 280 mm |   0.1 mm  |
|      After 1st fold: | 216 mm X 140 mm |   0.2 mm  |
|      After 2nd fold: | 108 mm X 140 mm |   0.4 mm  |
|      After 3rd fold: | 108 mm X 70 mm  |   0.8 mm  |
|      After 4th fold: |  54 mm X 70 mm  |   1.6 mm  |
|      After 5th fold: |  54 mm X 35 mm  |   3.2 mm  |
|      After 6th fold: |  27 mm X 35 mm  |   6.4 mm  |
|      After 7th fold: |  27 mm X 17.5 mm|  12.8 mm  |

From this calculation, one can see that folding 6 times is possible: when multiplying the thickness by 3 (i.e., 6.4 x 3), we get 19.2, which is smaller than both dimensions (27 and 35). However, folding 7 times is not possible: multiplying the thickness by 3 gives us 38.4, which is larger than at least one of the dimensions (actually, larger than both 27 and 17.5 here).</br>

You should write a program that returns the maximum number of times that a sheet can be folded in two, given the original dimesions and thickness of the sheet. More specifically, the input contains 2 lines. The first one contains two positive integers, seperated by a space, representing the dimensions of the sheet. The first of these two numbers will always be smaller or equal to the second number. On the second line, there is one positive real number that represents the thickness of the sheet. The output should contain only one positive integer, representing the maximum number of folds. The example below is the input and output for the example calculated in the table above. </br>

EXAMPLE INPUT:</br>
216 280</br>
0.1</br>

EXAMPLE OUTPUT:</br>
6</br>

