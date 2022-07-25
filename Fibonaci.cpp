#include "Fibonaci.h"

int Fibonaci::fibonaciLvl0(int n)
{
    {
        int nElement = 0;
        int nMinusOneElement = 1;
        int nMinusTwoElement = 0;

        if (n == 0)
            return nMinusTwoElement;
        else if (n == 1)
            return nMinusOneElement;

        else
        {
            for (int i = 1; i < n; i++)
            {
                numOfOpperations++;
                nElement = nMinusOneElement + nMinusTwoElement;
                //std::cout << nMinusOneElement<<"+"<<nMinusTwoElement<<"\n";
                nMinusTwoElement = nMinusOneElement;
                nMinusOneElement = nElement;
           
             
            }
            
            return nElement;

        }
    }
}

int Fibonaci::fibonaciLvl1(int n)
{
    
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
    {
        numOfOpperations++;
        return(fibonaciLvl1(n - 1) + fibonaciLvl1(n - 2));
        
    }
        
}

int Fibonaci::fibonaciLvl2(int n)
{
    
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (memoArr[n-1] != 0)
        return memoArr[n-1];
    else
    {
        numOfOpperations++;
        memoArr[n-1] = fibonaciLvl2(n - 1) + fibonaciLvl2(n - 2);
        return memoArr[n-1];
    }
        
}

int Fibonaci::fibonaciLvl3(int n, int a, int b)
{
    if (n == 0)
        return a;
    else if (n == 1)
        return b;
    numOfOpperations++;
    //std::cout << "n: " << n << " a: " << a << " b: " << b << std::endl;
    return fibonaciLvl3(n - 1, b, a + b);
}


int Fibonaci::calculate(int n, int whichFunction)
{
    memoArr = new int[n];
    for (int i = 0; i < n; i++)
    {
        memoArr[i] = 0;
    }
    numOfOpperations = 0;
    if(whichFunction==0)
        std::cout << "\nCalculeted fib number: " << fibonaciLvl0(n);
    else if (whichFunction == 1)
        std::cout << "\nCalculeted fib number: " << fibonaciLvl1(n);
    else if (whichFunction == 2)
        std::cout << "\nCalculeted fib number: " << fibonaciLvl2(n);
    else if (whichFunction == 3)
        std::cout << "\nCalculeted fib number: " << fibonaciLvl3(n);
    //std::cout << "\nNumeber of opperations needed: " << numOfOpperations;
    return 0;
}
