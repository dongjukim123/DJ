//
// Created by dongju-kim on 23. 3. 10.
//
# include <iostream>

int main()
{
    int num=0;
    int dnum=1;
    int sum = 0,idx =1;
    int my_num;
    std::cin>>my_num;

    while(true)
    {
        sum = sum + idx;
        if(my_num<=sum)
        {
            if(idx%2==0)
            {
                num=sum-my_num+1;
                dnum=idx+1-num;
            }
            else
            {
                dnum=sum-my_num+1;
                num=idx+1-dnum;
            }
            break;
        }

        ++idx;

    }
    std::cout<<dnum<<"/"<<num<<std::endl;
    return 0;
}
