
#include<iostream>

using namespace std;

static int minDistance(int a)
{

    int temp=a;
    int fact=1;
    int distance=0;
    int shortestDistance=a;
    int lastFact=1;

    while(temp>1)
    {

        if(temp % fact==0)
       {
            if(lastFact!=fact)
            {
            distance=fact-lastFact;
            lastFact=fact;
            }

            temp=temp/fact;


            fact=1;


            if(shortestDistance>distance && distance !=0)
            {

                shortestDistance=distance;
            }
        }

        fact++;
    }
    return shortestDistance;
}




