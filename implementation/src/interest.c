#include<stdio.h>
#include"bank.h"
float interest(float t,float amt,int r)
{
    float SI;
    SI=(r*t*amt)/100.0;
    return (SI);

}
