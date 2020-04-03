# pclub_cp
This repository contains my first submission for Round 1 for Secy of P club



Welcome to Heisenbergs' laboratory ( sadly he is dead and rules of physics dont apply here) , but u have to perform an experiment .

Infront of u are n wizards seated in a straight line with 2 labels on each of them ; -momentum m(i) and -position p(i). U can pick any one wizard(lets say with index u) and give him a particle ,(u  know the initial uncertainty in position and the initial uncertainity in momentum) .

The wizard will either increase or decrease its uncertainty in momentum exactly as per the label on top of him , same process goes for uncertainity in position (remember there is no relation in both of them) and hand the particle to the next wizard seated adjacent to him (with index u+1) . U can stop this process at any time . 


Now u r a Mathematician and u want to know the total number of ways in which the final uncertainity in momentum and postion remains the same.
output maybe large so give result as mod with 10^9+7
PS:-Initial uncertainty in momentum and position r both greater than 100.

Input -:
First input line contains total number of wizards n,
the next n input lines contain the values to labels on top of them

Output
A single line output denoting total number of ways in which both final uncertainty values are same as initial ones.

Constraints
* 1<=n<=50
* 1<= m(i) <=50 for all i from 1 to n
* 1<= p(i) <=50 for all i from 1 to n
* m(1)+m(2)...m(n)<=50
* p(1)+p(2)...p(n)<=50


Eg 1:-

input 
* 3
* 1 1
* 1 1
* 1 1


output 
* 8

explanation:
the following ways are  :-
* [+1 +1] (1),[-1 -1] (2)                  ()parenthesis denote index of wizard
* [+1 -1] (1),[-1 +1] (2)
* [-1 -1] (1),[+1 +1] (2)
* [-1 +1] (1),[+1 -1] (2)
* [+1 +1] (2),[-1 -1] (3)                 
* [+1 -1] (2),[-1 +1] (3)
* [-1 -1] (2),[+1 +1] (3)
* [-1 +1] (2),[+1 -1] (3)
 

eg 2->
input 
* 3
* 1 3
* 2 6
* 1 3

output
* 4

explanation:
the following ways are  :-
* [+1 +3] (1),[-2,-6] (2),[+1,+3] (3)
* [-1 +3] (1),[+2,-6] (2),[-1,+3] (3)
* [+1 -3] (1),[-2,+6] (2),[+1,-3] (3)
* [-1 -3] (1),[+2,+6] (2),[-1,-3] (3)


############################################################################################

Here is another original question but i didnt submit it bcz i wasnt able to solve it myself .If the reader is able to solve this one ,kindly let me know

U r the owner of a hospital but due to COVID-19 , the influx of patients has increased tremendously. U have to employ nurses but u have limited funds ,so u really need to be cautious on the selection process. U need to maximise the number of hours for which nurses would be there in hospital keeping in mind the fund constraints.
The nurses work for a particular timeframe only but at any particular time only one nurse should be present in hospital(i.e their time frames shouldnt overlap) and every nurse charges a certain fees for her services.

Input 
first line contains input n , the number of nurses and f, funds of hospital
the next n lines contains input about the time frame for nurses and the fees they charge. 
t2(i)  > t1(i)
t1(i) - t2(i)  p(i)
eg 4-9 80
it means the nurse works from 0400 to 0900 at cost of 80 rupees

OUtput
single integer denoting the maximum number of hours for which u can employ nurses


Constraints:
the start and end time of any nurse shift whill be an integer 0<=t1(i)<t2(i)<=24
if shift of one nurse begins and the moment when another nurse's shift ends ,then its okay.
i have no idea about time complexity of solution so decide n suitably 

* 0<=f<=10^18


eg 1
input 
* 5 100
* 5-14 30
* 23-24 10
* 0-10 50
* 12 -18 50
* 3-4 10

output
18

explanation 
maximum number of hours can be obtained by employing nurse 3 and 4


