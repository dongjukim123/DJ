#include <iostream>
int main()
{
    int N;
    std::cin>>N;
    int val = (N-1)/6;
    int idx = 0;
    int num = 1;
    int sum = 1;
    while(true)
    {
        sum=sum+6*idx;
        ++idx;

        if(N>sum)
        {
            ++num;
        }

        else
        {
            break;
        }

    }

    std::cout<<num<<std::endl;
    return 0;
}
