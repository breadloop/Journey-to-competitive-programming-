# conditional statements H problem (omegaup) minimum exchanges

-**Difficulty:** Beginner
-**Tecnic:** if/else
-**link:** https://omegaup.com/course/introduccion_a_cpp/assignment/declaraciones_condicionales#problems/Intercambios-minimos

## Problem
calculate the minimum steps to reverse a serie of numbers

## idea for the solution
I dont have idea, no wait, the problem is to order the numbers from small to large

## ANALYSIS
I comprehend the problem more deepfull and notice somthing, the specific cases were the way to solve the problem, here are the cases.
-**There are 3 possible ways**
    -*1* All te numbers are the same, in this case the only thing to do is verify is it true.
    -*2* two numbers are equal one different, in this case are some patterns i notice and thare are actually cases:
        - If A = B -> the only thing to do is check if A > C
        - If B = C -> C > A
        - if C = A -> A > B
    when you know in which case you are, is most simple to solve it.
    -*3* the 3 numbers are different, in this case its apply 4 possible subcases with a number of solution
        -*1* A < B < C, this is the perfect case -> 0 exchanges
        -*2* A > B > C - 1 exhange
        -*3* A > B < C - 2 exchanges 
        -*4* A < B > C - 2 exchanges  

    ***Example***
    2 1 3           3 1 2
    
    A = 2           A = 3
    B = 1           B = 1
    C = 3           C = 2

    this is the 3 subcase of the third case, in this espefici case we need to do 2 exhanges or 1 it depends on the case
    in the A case we just only need 1 movement, we need to change the value of A to B, on the other hand in the case B we need to do 2 exhanges, first A to B and then B to C. 
    

## Try and failures
-**First try:** try to verify the numbers with others and then see how many changes I need to do, i understood that the are some especif cases were you can make the exchange. 

## Lesson
Read the problem carefully, and dont give up.
