int arr[2][3] = {{1,2,3},{4,5,6}};

    for(int (&ln)[3] : arr) // ln : 크기가 3인 배열을 참조자 형식으로
    {
        for(int &col : ln)
        {
            std::cout<<col<<' ';
        }
        std::cout << std::endl;
    }

//출력 : 1 2 3
//      4 5 6
//ln :1차원 배열, arr : 2차원 배열
