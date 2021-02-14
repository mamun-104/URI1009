#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;

    double fixed_salary, sales;
    scanf("%lf%lf",&fixed_salary,&sales);

    if(sales == 0.00)
    {
        printf("TOTAL = R$ %.2lf\n",fixed_salary);
    }
    else{
        printf("TOTAL = R$ %.2lf\n",fixed_salary+((sales*15.00)/100.00));
    }

    return 0;
}
