//
// Created by dongju-kim on 23. 3. 10.
//
# include <iostream>

int main()
{
    int N, M;
    std::cin>>N>>M;
    int i, j;
    int values = 0;
    int* arr = new int[N];

    for(int idx=0;idx<N;++idx)
    {
        arr[idx]=idx+1;
    }


    for(int indx=0;indx<M;++indx)
    {
        std::cin>>i>>j;

        for(int idx=i-1,jdx=0;jdx<(j-i+1)/2;++idx,++jdx)
        {
            values = arr[idx];
            arr[idx]=arr[j-1-jdx];
            arr[j-1-jdx]=values;

        }

    }

    for (int indx = 0; indx < N; ++indx)
    {
        std::cout << arr[indx] << " ";
    }

    delete[] arr;

    return 0;
}
