//
// Created by dongju-kim on 23. 4. 4.
//
# include <qpOASES.hpp>
# include <limits>
int main()
{
    /* setup data of QP f function */
    qpOASES::real_t H[2*2]={1.0,-1.0,-1.0,1.0}; //2차항 행렬
    qpOASES::real_t g[2*1]={4.0,-1.0}; //1차항 행렬

    /* boundary conditions of AX */
    qpOASES::real_t A[1*2]={1.0,1.0}; //  lbA<=AX<=ubA
    qpOASES::real_t lbA[1] = {2.0};
    qpOASES::real_t ubA[1] = {std::numeric_limits<float>::infinity()};

    /*boundary conditions of x1,x2*/
    qpOASES::real_t lb[2*1] = {0.0,0.0};
    qpOASES::real_t ub[2*1] = {100000,100000};

    /* input value */
    qpOASES::QProblem example(2,1); //2개 변수

    qpOASES::Options options;
    example.setOptions(options);

    /*solve first QP*/
    int nWSR = 10;
    example.init(H,g,A,lb,ub,lbA,ubA,nWSR);
    qpOASES::real_t xOpt[2];
    example.getPrimalSolution(xOpt);

    printf( "\nxOpt = [ %e, %e ];   objVal = %e\n\n",
        xOpt[0],xOpt[1],example.getObjVal() );


    return 0;
}
