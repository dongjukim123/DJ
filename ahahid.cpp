//
// Created by dongju-kim on 23. 3. 10.
//
# include <iostream>
# include <string.h>

int main()
{
    char str[5][16] = {0};
    int max_len =0;
    for(auto& i : str)
    {
        std::cin >> i;
        if (max_len < strlen(i))
        {
            max_len = strlen(i);
        }
    }

    for(int idx=0;idx<max_len ;++idx)
    {
        for(int j=0;j<5;++j)
        {
            while (str[j][idx] == 0)
            {
                ++j;
            }

            std::cout << str[j][idx];
        }

    }
    return 0;
}
