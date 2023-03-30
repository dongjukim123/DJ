//
// Created by dongju-kim on 23. 3. 10.
//
# include <iostream>

int main()
{
    int a,b;
    int sum = 0;
    int T;
    std::cin>>T;

    for(int j=0;j<T;++j)
    {
        std::cin>>a>>b;
        int arr[a+1][b];

        for(int idx=0;idx<b;++idx)
        {
            arr[a][idx]=idx+1;
        }
        for(int i=a-1;i>=0;--i)
        {
                for(int idx=0;idx<b;++idx)
                {
                    sum = sum+arr[i+1][idx];
                    arr[i][idx]=sum;
                }

            sum =0;

        }
        std::cout<<arr[0][b-1]<<std::endl;
    }
    return 0;

}
