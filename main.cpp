#include <iostream>
#include <conio.h>
#include <cmath>
#define PI           3.14159265358979323846
float f(float core);
float veddl (float b);
int main()
{
    float end;
    float total;
    std::cout << "Enter END: ";
    std::cin  >> end;
    total=veddl(end);
    std::cout << "Your result:";
    std::cout << total;
    getch();
    return 0;
}
float veddl(float b )
{
    int num=1;
    float h;
    float z;
    int k= 0;
    int l= 0;
    float res = 0;
    float iNteg[num];
    float x[7];
    float y[7];
    float beg=0 ;
    std::cout << "Enter NUM: ";
    std::cin  >> num;
    h=(b-beg)/num;
    z=h/6;
    for(int l=0;l<num;l++)
    {
        x[0]=beg;
        y[0]=f(x[0]);
        for(int k= 1;k<7;k++)
        {
            x[k]=x[k-1]+z;
            y[k]=f(x[k]);
        }
        beg=x[6];
        iNteg[l]=3*z/10*(y[0]+5*y[1]+y[2]+6*y[3]+y[4]+5*y[5]+y[6]);
        res=0+iNteg[l];
    }
    return res;
}
float f(float core)
{
    double sub;
    sub=cos(core*core*PI/2);
    return sub;
}