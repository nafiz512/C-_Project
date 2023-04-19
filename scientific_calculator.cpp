
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
double k=0,result=0,result_a=0,result_b=0,result_c=0,x,y;
int r=0,l=1,m,n,mk;
int menu()
{
    int ch;
    printf("\n  1.Add(+)     10.X!");
    printf("\n  2.Sub(-)     11.log10(x)");
    printf("\n  3.Multi(x)   12.Sin(x)");
    printf("\n  4.Div(/)     13.Cos(x)");
    printf("\n  5.Rim(%%)     14.tan(x)");
    printf("\n  6.x^y        15.Complex");
    printf("\n  7.x^(1/y)    16.Vector");
    printf("\n  8.10^x       17.Matrix");
    printf("\n  9.clear      18.nPr");
    printf("\n  0.Exit       19.nCr");
    printf("\n  20.Equation  21.e^x");
    printf("\n\n  Enter your choice:");
    scanf("%d",&ch);
    return ch;
}
void add()
{
    l=1;
    double a,b;
    if(k)
    {
        printf("\n  Enter a number :");
        scanf("%lf",&a);
        result=result+a;
       // printf("\n  Result=%0.2lf",result);
    }
    else
    {
        printf("\n  Enter two number :");
        scanf("%lf%lf",&a,&b);
        result=a+b;
       // printf("\n  Result=%0.2lf",result);
    }
    k=1;
}
void sub()
{
    l=1;
    double a,b;
    if(k)
    {
        printf("\n  Enter a number :");
        scanf("%lf",&a);
        result=result-a;
      //  printf("\n  Result=%0.2lf",result);
    }
    else
    {
        printf("\n  Enter two number :");
        scanf("%lf%lf",&a,&b);
        result=a-b;
       // printf("\n  Result=%0.2lf",result);
    }
    k=1;
}
void multi()
{
    l=1;
    double a,b;
    if(k)
    {
        printf("\n  Enter a number :");
        scanf("%lf",&a);
        result=result*a;
      //  printf("\n  Result=%0.2lf",result);
    }
    else
    {
        printf("\n  Enter two number :");
        scanf("%lf%lf",&a,&b);
        result=a*b;
      //  printf("\n  Result=%0.2lf",result);
    }
    k=1;
}
void divi()
{
    l=1;
    double a,b;
    if(k)
    {
        printf("\n  Enter a number :");
        scanf("%lf",&a);
        result=result/a;
      //  printf("\n  Result=%0.2lf",result);
    }
    else
    {
        printf("\n  Enter two number :");
        scanf("%lf%lf",&a,&b);
        result=a/b;
      //  printf("\n  Result=%0.2lf",result);
    }
    k=1;
}
void rim()
{
    l=1;
    int  a,b;
    if(k)
    {
        printf("\n  Enter a number :");
        scanf("%d",&a);
        r=r%a;

     //   printf("\n  Result=%d",r);
    }
    else
    {
        printf("\n  Enter two number :");
        scanf("%d%d",&a,&b);
        r=a%b;
        result=r;
     //   printf("\n  Result=%d",r);
    }
    k=1;
}
void power()
{
    l=1;
    double a,b;
    if(k)
    {
        printf("\n  Enter a number :");
        scanf("%lf",&a);
        result=pow(result,a);
      //  printf("\n  Result=%0.2lf",result);
    }
    else
    {
        printf("\n  Enter two number :");
        scanf("%lf%lf",&a,&b);
        result=pow(a,b);
      //  printf("\n  Result=%0.2lf",result);
    }
    k=1;
}
void rootab()
{
    l=1;
    double a,b;
    if(k)
    {
        printf("\n  Enter a number :");
        scanf("%lf",&a);
        result=pow(result,(1/a));
     //   printf("\n  Result=%0.2lf",result);
    }
    else
    {
        printf("\n  Enter two number :");
        scanf("%lf%lf",&a,&b);
        result=pow(a,(1/b));
    //    printf("\n  Result=%0.2lf",result);
    }
    k=1;
}
void power10x()
{
    l=1;
    double a,b;
    if(k)
    {
        result=pow(10,result);
     //   printf("\n  Result=%0.2lf",result);
    }
    else
    {
        printf("\n  Enter a number :");
        scanf("%lf",&a);
        result=pow(10,a);
    //    printf("\n  Result=%0.2lf",result);
    }
    k=1;
}
void clear()
{
    result=0;
    k=0;
    l=1;
    printf("\n  Old data cleared");
}

void factx()
{
    l=1;
    double i,f=1,a;
    if(k)
    {
        for (i=1; i<=result; i++)
        {
            f=f*i;
        }
        result=f;
      //  printf("\n  Result=%0.2lf",f);
    }
    else
    {
        printf("\n  Enter a number :");
        scanf("%lf",&a);
        for (i=1; i<=a; i++)
        {
            f=f*i;
        }
        result=f;
      //  printf("\n  Result=%0.2lf",f);
    }
    k=1;
}
void log10x()
{
    l=1;
    double a;
    if(k)
    {
        result=log10(result);
     //   printf("\n  Result=%0.2lf",result);
    }
    else
    {
        printf("\n  Enter a number :");
        scanf("%lf",&a);
        result=log10(a);
       // printf("\n  Result=%0.2lf",result);
    }
    k=1;
}
void sinx()
{
    l=1;
    double a;
    if(k)
    {
        result=sin(result*3.14159265359/180);
      //  printf("\n  Result=%0.2lf",result);
    }
    else
    {
        printf("\n  Enter angle in degree :");
        scanf("%lf",&a);
        result=sin(a*3.14159265359/180);
      //  printf("\n  Result=%0.2lf",result);
    }
    k=1;
}
void cosx()
{
    l=1;
    double a;
    if(k)
    {
        result=cos(result*3.14159265359/180);
       // printf("\n  Result=%0.2lf",result);
    }
    else
    {
        printf("\n  Enter angle in degree :");
        scanf("%lf",&a);
        result=cos(a*3.14159265359/180);
       // printf("\n  Result=%0.2lf",result);
    }
    k=1;
}
void tanx()
{
    l=1;
    double a;
    if(k)
    {
        result=tan(result*3.14159265359/180);
      //  printf("\n  Result=%0.2lf",result);
    }
    else
    {
        printf("\n  Enter angle in degree :");
        scanf("%lf",&a);
        result=tan(a*3.14159265359/180);
       // printf("\n  Result=%0.2lf",result);
    }
    k=1;
}
int complex_menu()
{
    int cpl;
    printf("\n  1.Add");
    printf("\n  2.Sub");
    printf("\n  3.Multi");
    printf("\n  4.Div");
    printf("\n  5.Back");
    printf("\n  Enter your choice:");
    scanf("%d",&cpl);
    return cpl;
}
void complex_add()
{
    double n1,n2,n3,n4;
    printf("\n  Enter 1st complex numbers :");
    scanf("%lf%lf",&n1,&n2);
    printf("\n  Enter 2nd complex numbers :");
    scanf("%lf%lf",&n3,&n4);
    result_a=n1+n3;
    result_b=n2+n4;
}
void complex_sub()
{
    double n1,n2,n3,n4;
    printf("\n  Enter 1st complex numbers :");
    scanf("%lf%lf",&n1,&n2);
    printf("\n  Enter 2nd complex numbers :");
    scanf("%lf%lf",&n3,&n4);
    result_a=n1-n3;
    result_b=n2-n4;
}
void complex_multi()
{
    double n1,n2,n3,n4;
    printf("\n  Enter 1st complex number :");
    scanf("%lf%lf",&n1,&n2);
    printf("\n  Enter 2nd complex number :");
    scanf("%lf%lf",&n3,&n4);
    result_a=n1*n3-n2*n4;
    result_b=n1*n4-n2*n3;
}
void complex_div()
{
    double n1,n2,n3,n4;
    printf("\n  Enter 1st complex number :");
    scanf("%lf%lf",&n1,&n2);
    printf("\n  Enter 2nd complex number :");
    scanf("%lf%lf",&n3,&n4);
    result_a=(n1*n3+n2*n4)/(n3*n3+n4*n4);
    result_b=(n2*n3-n4*n1)/(n3*n3+n4*n4);
}
int vactor_menu()
{
    int vc;
    printf("\n  1.vactor A+B");
    printf("\n  2.vactor A-B");
    printf("\n  3.vactor A.B");
    printf("\n  4.vactor A x B");
    printf("\n  5.Back");
    printf("\n  Enter your choice:");
    scanf("%d",&vc);
    return vc;
}
void vactor_add()
{
    double a1,b1,c1,a2,b2,c2;
    printf("\n  Enter 1st vactor Ax i   Ay j   Az k :");
    scanf("%lf%lf%lf",&a1,&b1,&c1);
    printf("\n  Enter 2nd vactor Bx i   By j   Bz k :");
    scanf("%lf%lf%lf",&a2,&b2,&c2);
    result_a=a1+a2 ;
    result_b=b1+b2 ;
    result_c=c1+c2 ;
}
void vactor_sub()
{
    double a1,b1,c1,a2,b2,c2;
    printf("\n  Enter 1st vactor Ax i   Ay j   Az k :");
    scanf("%lf%lf%lf",&a1,&b1,&c1);
    printf("\n  Enter 2nd vactor Bx i   By j   Bz k :");
    scanf("%lf%lf%lf",&a2,&b2,&c2);
    result_a=a1-a2 ;
    result_b=b1-b2 ;
    result_c=c1-c2 ;
}
void vactor_dot()
{
    double a1,b1,c1,a2,b2,c2;
    printf("\n  Enter 1st vactor Ax i   Ay j   Az k :");
    scanf("%lf%lf%lf",&a1,&b1,&c1);
    printf("\n  Enter 2nd vactor Bx i   By j   Bz k :");
    scanf("%lf%lf%lf",&a2,&b2,&c2);
    result=a1*a2+b1*b2+c1*c2;
}
void vactor_cross()
{
    double ax,ay,az,bx,by,bz;
    printf("\n  Enter 1st vactor Ax i   Ay j   Az k :");
    scanf("%lf%lf%lf",&ax,&ay,&az);
    printf("\n  Enter 2nd vactor Bx i   By j   Bz k :");
    scanf("%lf%lf%lf",&bx,&by,&bz);
    result_a=ay*bz-az*by ;
    result_b=az*bx-ax*bz ;
    result_c=ax*by-ay*bx;
}
int matrix_menu()
{
    int mt;

    printf("\n  1.Matrix A+B");
    printf("\n  2.Matrix A-B");
    printf("\n  3.Matrix A X B");
    printf("\n  4.Back");
    printf("\n  Enter your choice:");
    scanf("%d",&mt);
    if(mt==1||mt==2)
    {
        printf("\n  Enter matrix rows x columns:");
        scanf("%d%d",&m,&n);
    }
    else if(mt==3)
    {
        system("cls");
        printf("\n  1.Matrix 3x3");
        printf("\n  2.Matrix 2x2");
        printf("\n  3.Back");
        printf("\n  Enter your choice:");
        scanf("%d",&mk);
    }
    return mt;
}

void matrix_add()
{
    int mat1[m][n],mat2[m][n],matr[m][n];
    int i,j;
    printf("\n  Enter matrix A:");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\n  Enter matrix B:");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            matr[i][j]=mat1[i][j]+mat2[i][j];
            printf("  %d  ",matr[i][j]);
        }
        printf("\n");
    }
    getch();
    l=1;
    k=0;
    result=0;
}
void matrix_sub()
{
    int mat1[m][n],mat2[m][n],matr[m][n];
    int i,j;
    printf("\n  Enter matrix A:");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\n  Enter matrix B:");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            matr[i][j]=mat1[i][j]-mat2[i][j];
            printf("  %d  ",matr[i][j]);
        }
        printf("\n");
    }
    getch();
    l=1;
    k=0;
    result=0;
}
void matrix_multi()
{
    int SIZE=3;
    if(mk==1)
    {
        SIZE=3;
    }
    else if(mk==2)
    {
        SIZE=2;
    }
    else if(mk==3)
    {
         exit(0);
    }
    int A[SIZE][SIZE];
    int B[SIZE][SIZE];
    int C[SIZE][SIZE];
    int row, col, i, sum;
    printf("Enter matrix A : \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    printf("\nEnter matrix B : \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            sum = 0;
            for(i=0; i<SIZE; i++)
            {
                sum += A[row][i] * B[i][col];
            }
            C[row][col] = sum;
        }
    }
    printf("\nProduct of matrix A x B = \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            printf("  %d  ", C[row][col]);
        }
        printf("\n");
    }
    getch();
    l=1;
    k=0;
    result=0;
}
void npr()
{
    int n,r,i,s1=1;
    printf("Enter n r : \n");
    scanf("%d%d",&n,&r);
    for(i=1;i<=r;i++,n=n-1)
    {
        s1=s1*n;
    }
    result=s1;
    l=1;
    k=1;
}
void ncr()
{
    int n,r,i,s1=1;
    double s2;
    printf("Enter n r : \n");
    scanf("%d%d",&n,&r);
    for(i=1;i<=r;i++,n=n-1)
    {
        s1=s1*n;
    }
    s2=s1*1.0;
     for(i=1;i<=r;i++)
    {
        s2=s2/i;
    }
    result=s2;
    l=1;
    k=1;
}
int equation_menu()
{
    int eql;
    printf("\n  1.ax+by=c");
    printf("\n  2.ax+by+cz=d");
    printf("\n  3.ax^2+by+c=0");
    printf("\n  4. ax^3+by^2+cz+d=0");
    printf("\n  5.Back");
    printf("\n  Enter your choice:");
    scanf("%d",&eql);
    return eql;
}
void  equation_one()
{
     double a1,a2,b1,b2,c1,c2;
     printf("enter\na1  b1  c1\na2  b2  c2\n");
     scanf("%lf%lf%lf%lf%lf%lf",&a1,&b1,&c1,&a2,&b2,&c2);
     x=(b2*c1-b1*c2)/(a1*b2-a2*b1);
     y=(a1*c2-a2*c1)/(a1*b2-a2*b1);
}
void  equation_two()
{

}
void  equation_three()
{

}
void  equation_four()
{

}
int  main()
{
spoint:
    while(1)
    {
        system("cls");
        if(l==1)
        {
            printf("\n  Result= %0.2lf\n\n",result);
        }
        else if(l==2)
        {
            if(result_b>0)
            {
                printf("\n  Result= %0.2lf + %0.2lfi\n\n",result_a,result_b);
                l=1;
            }
            else
            {
                printf("\n  Result= %0.2lf %0.2lfi\n\n",result_a,result_b);
                l=1;
            }
        }
        else if(l==3)
        {
            if(result_b>0&&result_c>0)
            {
                printf("\n  Result= %0.2lfi + %0.2lfj + %0.2lfk\n\n",result_a,result_b,result_c);
                l=1;
            }
            else if(result_b>0&&result_c<0)
            {
                printf("\n  Result= %0.2lfi + %0.2lfj %0.2lfk\n\n",result_a,result_b,result_c);
                l=1;
            }
            else if(result_b<0&&result_c<0)
            {
                printf("\n  Result= %0.2lfi %0.2lfj %0.2lfk\n\n",result_a,result_b,result_c);
                l=1;
            }
            else if(result_b<0&&result_c>0)
            {
                printf("\n  Result= %0.2lfi %0.2lfj + %0.2lfk\n\n",result_a,result_b,result_c);
                l=1;
            }
        }
        else if(l==4)
        {
             printf("\n  x = %0.2lf \n y = %0.2lf \n\n",x,y);
        }
        else
        {
            printf("\n there is a problem \n\n");
        }
        int c=menu();
        if (c==1)
        {
            add();
        }
        else if (c==2)
        {
            sub();
        }
        else if (c==3)
        {
            multi();
        }
        else if (c==4)
        {
            divi();
        }
        else if (c==5)
        {
            rim();
        }
        else if (c==6)
        {
            power();
        }
        else if (c==7)
        {
            rootab();
        }
        else if (c==8)
        {
            power10x();
        }
        else if (c==9)
        {
            clear();
        }
        else if (c==0)
        {
            break ;
            //exit(0);
        }
        else if (c==10)
        {
            factx();
        }
        else if (c==11)
        {
            log10x();
        }
        else if (c==12)
        {
            sinx();
        }
        else if (c==13)
        {
            cosx();
        }
        else if (c==14)
        {
            tanx();
        }
        else if (c==15)
        {
            system("cls");
            result =0;
            l=2;
            k=0;
            int z=complex_menu();
            if(z==1)
            {
                complex_add();
            }
            else if(z==2)
            {
                complex_sub();
            }
            else if(z==3)
            {
                complex_multi();
            }
            else if(z==4)
            {
                complex_div();
            }
            else if(z==5)
            {
                l=1;
                goto spoint ;
            }
        }
        else if (c==16)
        {
            system("cls");
            //result =0;
            l=3;
            k=0;
            int z=vactor_menu();
            if(z==1)
            {
                vactor_add();
            }
            else if(z==2)
            {
                vactor_sub();
            }
            else if(z==3)
            {
                l=1;
                vactor_dot();
            }
            else if(z==4)
            {
                vactor_cross();
            }
            else if(z==5)
            {
                l=1;
                goto spoint ;
            }
        }
        else if (c==17)
        {
            system("cls");
            //result =0;
            k=0;
            int z=matrix_menu();
            if(z==1)
            {
                matrix_add();
            }
            else if(z==2)
            {
                matrix_sub();
            }

            else if(z==3)
            {
                matrix_multi();
            }
            else if(z==4)
            {
                l=1;
                goto spoint;
            }
        }
         else if (c==18)
         {
             npr();
         }
         else if (c==19)
         {
             ncr();
         }
         else if (c==20)
        {
            system("cls");
            result =0;
            l=4;
            k=0;
            int z=equation_menu();
            if(z==1)
            {
                equation_one();
            }
            else if(z==2)
            {
                equation_two();
            }
            else if(z==3)
            {
                equation_three();
            }
            else if(z==4)
            {
                equation_four();
            }
            else if(z==5)
            {
                l=1;
                goto spoint ;
            }
        }
        else
        {
            printf("\n  Invalid input");
        }//end of condition
        //getch();
    }//end of loop
    return 0;
}// end of main
