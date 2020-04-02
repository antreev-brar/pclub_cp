# pclub_cp
This repository contains my first submission for Round 1 for Secy of P club



Welcome to Heisenbergs' laboratory ( sadly he is dead and rules of physics dont apply here) , but u have to perform an experiment .

Infront of u are n wizards seated in a straight line with 2 labels on each of them ; -momentum m(i) and -position p(i). U can pick any one wizard and give him a particle ,(u  know the initial uncertainty in position and the initial uncertainity in momentum) .

The wizard will either increase or decrease its uncertainty in momentum exactly as per the label on top of him , same process goes for uncertainity in position (remember there is no relation in both of them) and hand the particle to the next wizard seated adjacent to him (in this direction ---> ). U can stop this process at any time . 


Now u r a Mathematician and u want to know the total number of ways in which the final uncertainity in momentum and postion remains the same.
output maybe large so give result as mod with 10^9+7
PS:-Initial uncertainty in momentum and position r both greater than 100.

Input -:
First input line contains total number of wizards n
the next n input lines contain the values to labels on top of them

Output
A single line output denoting total number of ways in which both final uncertainty values are same as initial ones.

Constraints
1<=n<=50
1<= m(i) <=50 for all i from 1 to n
1<= p(i) <=50 for all i from 1 to n
m(1)+m(2)...m(n)<=50
p(1)+p(2)...p(n)<=50


Eg 1:-

input 
3
1 1
1 1
1 1


output 
8

explanation:
the following ways are  :-
[+1 +1](1),[-1 -1](2)                  ()parenthesis denote index of wizard
[+1 -1](1),[-1 +1](2)
[-1 -1](1),[+1 +1](2)
[-1 +1](1),[+1 -1](2)
[+1 +1](2),[-1 -1](3)                 
[+1 -1](2),[-1 +1](3)
[-1 -1](2),[+1 +1](3)
[-1 +1](2),[+1 -1](3)


eg 2->
input 
3
1 3
2 6
1 3

output
4

explanation:
the following ways are  :-
[+1 +3](1),[-2,-6](2),[+1,+3](3)
[-1 +3](1),[+2,-6](2),[-1,+3](3)
[+1 -3](1),[-2,+6](2),[+1,-3](3)
[-1 -3](1),[+2,+6](2),[-1,-3](3)
