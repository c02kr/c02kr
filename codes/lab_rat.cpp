#include <iostream>
#include <stdio.h>
using namespace std;

// IN THIS CODE I WILL TEST INPUT - OUTPUT WORKING OF ARRAYS
// FURTHER AIM IS  BINARY SORT

//void test(int arr[], int n , int i )
int maxOfFour(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
    {
        return a;
    }
    if (b > a && b > c && b > d)
    {
        return b;
    }
    if (c > a && c > b && c > d)
    {
        return c;
    }
    if (d > a && d > b && d > c)
    {
        return d;
    }
    cout << "#############TASK PERFORMED SUCESSFULLY!!###########################TASK PERFORMED SUCESSFULLY!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ENDING THE PROGRAMM ###############################\n";
    return 0;
}
int max_of_four(int a, int b, int c, int d)
{
    return max(max(a, b), max(c, d));
    cout << "#############TASK PERFORMED SUCESSFULLY!!###########################TASK PERFORMED SUCESSFULLY!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ENDING THE PROGRAMM ###############################\n";
    return 0;
}
int printArray(int arr[], int n )
{
    int take ;
    cout<<"Enter the no. of arrray element to be printed --  ";
    cin>>take;
    cout<< "The array element present at " << take << "is ";
    return arr[take];
    cout << "#############TASK PERFORMED SUCESSFULLY!!###########################TASK PERFORMED SUCESSFULLY!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ENDING THE PROGRAMM ###############################\n";
    return 0;
}

void revArray(int arr[], int n)
{
    cout<<"The same array in the reverse order is  ";
    int i ;
    
    for(i=n ; i>0 ; i--)
    {
        cout<<arr[i];
        cout<<"\t";
    }

}
int linserArr(int arr[], int n, int ser)
{
    int i; 
    
    for(i=0 ; i<=n;i++)
    {
        if(arr[i] == ser)
        {
            cout<<"The searched element"<<ser<<"is  present at the the  index  --  "<<i<<"  .\n\n";
        }

    }
    return -1;
}

void binserarr( int arr[], int n , int ser)
{
    int i ; 
    int s = 0 , e = n ,m;
    // cout<<"enter the m  ";
    // cin>>m;

    // cout<<m;
    for(s=1 ; s<e ; s++)
    {
        m= (s + e)/2;
        cout<<"printing value of m    "<<m;

        if(m == ser)
        {
            cout<<"Element found in the array at  "<<m;
        }
        else if(ser>m)
        {
            s= m;
            cout<<"\n\tperforming s=m wala \n\t";
        }
        else if(ser<m)
        {
            e=m;
            cout << "\n\tperforming e=m wala \n\t";
        }
    }
}

int main()
{
    int tt;
    int i , num , req , ser;
    char in;
    int in1 , in2, in3;
    int us, us1 , us2;
    int alpha, alpha2;

    cout<<"\nWELCOME TO A CODE OF DIVERSE OPERATIONS !! \n";
    cout<<"\n# PRESS THE DESIRED ALLPHABET THET CORRESPONDS TO A SPEIFIC OPERATION\n\n";
    cout<<"\n# HOW MANY OPERATIONS DO YOU WANT TO EXECUTE?? \n\n";
    cin>>tt;
    for(i=1;i<=tt;i++)
    {
    cout << "\t\n(A) NUMBER OPERATIONS\t\n\n(B) ARRAY OPERATIONS\t\n\n(C) PATTERNS \t\t\t\t\t";
    cin>>in;
    cout<<"\n\n";
    
    if(in == 'A' || in== 'B' || in== 'C')
    {
        cout << "You opt for the operation  " << in<<".\n\n";
    }
    else 
    {
        cout<<" ALERT !! YOU ENTERED A INVALID INPUT!!! \n\t**Try cheching upper and lower case.\n";
        return 0;
    }

    if( in == 'A')
    {
        cout << "Please select among these -- \n\n\t(1)find factorial\n\t(2) check prime or not\n\t(3) fibonacci\n\t(4) sum of digits\n\t(5) digits in reverse order\n\t(6) max of 4 digits\n\t(7)Table of any no upto 20\t\t";
        cin>>in1;
        cout<<"You opt for -- "<<in1<<"\t\n\n";
        
        if(in1 == 1)
        {
            int n, q, i;
            long double fact = 1;
            printf("Enter the no.  \t");
            scanf("%d", &n);
            for (i = 1; i <= n; i++)
            {
                fact = fact * i;
            }
            printf("The factorial of %d is %Lf\n", n, fact);
            cout << "#############TASK PERFORMED SUCESSFULLY!!###########################TASK PERFORMED SUCESSFULLY!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ENDING THE PROGRAMM ###############################\n";
            return 0;
        }
        
        else if(in1==2)
        {
            int a, b = 0, c;
            printf("Enter the no to be checked--\n");
            scanf("%d", &a);
            printf("\n");
            printf("The no. you entered is %d.\n\n", a);
            
            for (c = 2; c < a;)
            {
                if (a % c == 0)
                {
                    b++;
                    c++;
                }
                else
                {
                    c++;
                }
            }
            
            if (b > 0)
            {
                printf("Not  Prime !!\n\n");
            }
            
            else
            {
                printf("PRIME NUMBER!!\n\n");
            }
            printf("\t\t%d is divisible by %d other no(s) than 1 and %d .\n\n", a, b, a);
            cout << "#############TASK PERFORMED SUCESSFULLY!!###########################TASK PERFORMED SUCESSFULLY!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ENDING THE PROGRAMM ###############################\n";
            return 0;
        }
        
        else if(in1==3)
        {
            cout<<"YOU CAUGHT US\n\t\t#STILL IN PROGRESS!!";
            
        }
        
        else if(in1==4)
        {
            cout<<"HERE WE HAVE TWO MEATHODS !! \n\n\t"<<"Press '1' for first and '2' for second meathod --\t";
            cin>>us;
            cout << "\n\n";
            
            if (us == 1)
            {
                cout<<"YOU have opted for a meathod which uses simple division algorith me calculate the sum of digits you entered.\n\n";
                int a, b, c, d, e, f, g;
                printf("Enter any n-digit no. whose digit sum is to be found-\t\t");
                scanf("%d", &a);
                cout<<"\n\n";
                b = a % 10;
                f = a % 100;
                c = f / 10;
                g = a % 1000;
                d = g / 100;
                e = b + c + d;
                printf("The digits are   %d , %d , %d  and the sum is = %d \n\n", b, c, d, e);
            }
            
            else if(us ==2)
            {
                printf("Enter any n-digit no. whose digit sum is to be found-\t\t");
                int n, sum = 0, m;
                printf("Enter a number:\t");
                scanf("%d", &n);
                cout<<"\n\n";
                while (n > 0)
                {
                    m = n % 10;
                    sum = sum + m;
                    n = n / 10;
                }
                printf("Sum is=%d\n\n", sum);
            }
            cout << "#############TASK PERFORMED SUCESSFULLY!!###########################TASK PERFORMED SUCESSFULLY!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ENDING THE PROGRAMM ###############################\n";
            return 0;
        }
        else if(in1==5)
        {
            int a, b, c, d, e, f, g;
            printf("Enter the 3-digit no. whose reverse is to be found-\t\t");
            scanf("%d", &a);
            b = a % 10;
            f = a % 100;
            c = f / 10;
            g = a % 1000;
            d = g / 100;
            printf("The digits you etered are -- %d , %d, %d\n", d, c, b);
            printf("The reverse is -- %d%d%d \n", b, c, d);
            cout << "#############TASK PERFORMED SUCESSFULLY!!###########################TASK PERFORMED SUCESSFULLY!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ENDING THE PROGRAMM ###############################\n";
            return 0;                     
        }
        
        else if(in1 == 6)
        {
            cout << "HERE WE HAVE TWO MEATHODS \n\n"<< "Press '1' for first and '2' for second meathod.\n\n\t";
            cin >> us1;
            if (us1 == 1)
            {
                cout<<"This meathod somehow seems more organised and smart.\n\n";
                int a, b, c, d;
                printf("Enter the 4 numbers-- \n\n");
                scanf("%d %d %d %d", &a, &b, &c, &d);
                printf("\nMax of the 4 numbers is  ");
                int ans = max_of_four(a, b, c, d);
                printf("%d .\n\n", ans);
            }
            
            else if(us1 ==2)
            {
                cout<<"This meathod somehow easy to undrstand as it uses simple mathematical algorithms.\n\n ";
                int a, b, c, d;
                printf("Enter the 4 numbers-- \n\n");
                scanf("%d %d %d %d", &a, &b, &c, &d);
                cout<<"\n\n\t";
                int ans = maxOfFour(a, b, c, d);
                printf("The max no. among these is -- %d\n\n", ans);
            }
            cout << "#############TASK PERFORMED SUCESSFULLY!!###########################TASK PERFORMED SUCESSFULLY!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ENDING THE PROGRAMM ###############################\n";
            return 0;
        }
        
        else if(in1 == 7)
        {
            int i, n, t = 1;
            cout << "Enter the no of which table is to be formed -- ";
            cin >> n;
            cout << "Printing table of " << n << "\n\n";
            for (i = 1; i <= 20; i++)
            {
                t = n* i ;
                cout << i << "."
                     << "\t" << n << "\t"
                     << "X"
                     << "\t" << i << "\t"
                     << "="
                     << "\t" << t << "\n\n";
            }
            cout << "#############TASK PERFORMED SUCESSFULLY!!###########################TASK PERFORMED SUCESSFULLY!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ENDING THE PROGRAMM ###############################\n";
            return 0;
        }           
    }
    
    else if(in == 'B')
    {
        cout<<"Please select among the following option ---\n\n\t";
        cout << "\t(1)TO  PRINT A SPECIFIC ARRAY ELEMENT \n\n\t\t(2) TO PRINT ARRAY REVERSE \n\n\t\t(3) TO SEARCH FOR A ELEMENT IN ARRAY\n\n\t\t(4) Gteater than Less than\t\t";
        cin>>in2;
        cout<<"\n";
        cout<<"You have opted option  "<<in2<<".\n\n";
        cout << "\nEnter the no of array to be formed--  ";
        cin >> num;
        int arr[num];
        cout << "\nThe array of size " << num << " has been created!!\n\n";
        
        for (i = 1; i <= num; i++)
        {
            cout << "\t\t\t";
            cout << "#PLEASE ENTER THE ARRY ELEMENT " << i << " --  ";
            cin >> arr[i];
            cout << "\n";
        }
        
        if (in2 == 1)
        {
            cout << printArray(arr, num);
        }
        
        else if(in2 == 2)
        {
            revArray(arr, num);
        }
       
        else if (in2 == 3)
        {
            cout << "\n\t(31) linear seraching \n\t(32) binary searching\n\t";
            cout << "\n\t please proceeed--    ";
            cin >> alpha2;
            
            if (alpha2 == 31)
            {
                cout<<"\n";
                cout << "Enter the element to be LINEAR searched in the given array. ";
                cin >> ser;
                cout << "\n";
                linserArr(arr, num, ser);
            }
            
            else if (in2  == 32)
            {
                cout << "Enter the element to be BINARY searched in the given array. ";
                cin >> ser;
                binserarr(arr, num, ser);
            }
        }
        
        else if (in2 == 4)
        {
            int ask,  n,   i,   j; 
            cout<<"What do you want to find , PRESS 1 for a no. Greater than and PRESS 2 for a no. less than  AND PRESS 3 for Equal TO -- ";
            cin>>ask;
            if(ask ==1)
            {
                cout<<"\n\n\tGreater than which no. ?  "; 
                cin>>n;
                cout<<"\n";
                
                for(i = 1 ; i<=num; i++)
                {
                    if(arr[i] > n )
                    {
                        cout << " Student NO." << i << " has marks greater than  " << n << "  has scored " << arr[i] << ".\n\n";
                    }
                }
                
            }
            
            if(ask ==2)
            {
                cout<<"\n\n\t Less than which no. ?  ";
                cin>>n;
                
                for (i = 1; i <= num; i++)
                {
                    if (arr[i] < n)
                    {
                        cout << " Student NO." << i << "  has marks less than " << n << "  has scored " << arr[i] << ".\n\n";
                    }
                }
            }
            
            if(ask == 3)
            {
                cout << "\n\n\t EQUAL than which no. ?  ";
                cin >> n;
                
                for (i = 1; i <= num; i++)
                {
                    
                    if (arr[i] == n)
                    {
                        cout << " Student NO." << i << "  has marks equal to " << n << "  has scored "<<arr[i]<<".\n\n";
                    }
                }
            }
        }


        return 0;
    
    }
    
    else if(in == 'C')
    {
        int k ;
        cout << "NOW WHEN WE ARE PRINTING PATTERNS , CHOOSE THE PATTERN SYMBOL TO PROCEED WITH!\n";

        // char array2[][125] = {'!', '@', '#', '$', '%', '^', '&', '*', '+', '-', '_'};
        // for (i = 0; i <= 10; i++)
        // {
        //     cout << array2[i];
        //     cout<<"\n" ;
        // }
        
        cout << "Please select among the following option ---\n\n\t";
        
        char array1[][125] = {"(1) Rectangle", "(2) Frame", "(3) Half Pyramid", "(4) Inverted Half Pyramid",
        "(5)Half Pyramid after 180' rotation", "(6) Number triangle", "(7) Zig-Zag", "(8) Floyd's Triangle", "(9) Palindromic pattern",
        "(10) Diamond" , "(11) Hollow Diamond" , "(12) Hollow Diamond Inscribed in a Rectangle" , "(13) Solid Rhombus" ,"(14) Hollow Rhombus" , 
        "(15) Solid Butterfly", "(16) Hollow Butterfly", "(17) Pascal s Triangle", "(18) PRINT ALL THE PATTERNS"};
        
        for(k= 0 ; k<=18 ; k++)
        {
            cout << "\n"<< array1[k] << "\n";
        }        
        //cout<< "(1)Rectangle \n\n\t\t(2)Frame \n\n\t\t(3)Inverted Pyramid \n\n\t\t(4)Pyramid \n\n\t\t(5)Pyramid after 180' rotation\t\t ";
        cin >> in3;
       
        if(in3 == 1)
        {
            cout << "You opted for the task"<<" --  "<<array1[in3 - 1]<< "\n\n";
            int i, j, row, column;
            printf("Enter the no.of rows =  ");
            scanf("%d", &row);
            printf("Enter the  no.of columns =  ");
            scanf("%d", &column);
            printf("The  rectangular pattern for %d rows and %d columns is below.\n", row, column);
            
            for (i = 0; i <= row; i++)
            {
                for (j = 0; j <= column; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            cout<<"\n";
        }
        
        if(in3 == 2)

        {
            cout << "You opted for the task"<< " --  " << array1[in3 - 1] << "\n\n";
            int row, column, i, j;
            cout<<"What is  the no. of rows? --  ";
            cin>>row;
            cout<<"What is the no . of columns ? --  ";
            cin>>column;
            
            for(i = 0 ; i<=row ; i++)
            {
                for(j = 0; j<=column ; j++)
                {
                   
                    if(i == 0 || j==0 || i == row || j == column)
                    {
                        cout<<"*";
                    }
                    else 
                    {
                        cout<<" ";
                    }
                }
                cout<<"\n";
            }
        }
        if (in3 == 3)
        {
            int n ;
            cout << "You opted for the task"<< " --  " << array1[in3 - 1] << "\n\n";
            cout<<"How many times the pattern should be printed ?\t";
            cin>>n ; 
            
            for(int i =0 ; i<=n ; i++)
            {
                
                for(int j = 0 ; j<=i ; j++)
                {
                    cout<<"*";
                }
                cout<<"\n";
            }
        }
        if (in3 == 4)
        {
            int n , j , i;
            cout << "You opted for the task"<< " --  " << array1[in3 - 1] << "\n\n";
            cout << "How many times the pattern should be printed ?\t";
            cin >> n;
            
            for(i= n ; i>=0 ; i--)
            {
                
                for(j=0 ; j<=i ; j++)
                {
                    cout<<"*";
                }
                cout<<"\n";
            }
        }
        if (in3 == 5)
        {
            int n, j, i;
            cout << "You opted for the task"<< " --  " << array1[in3 - 1] << "\n\n";
            cout << "How many times the pattern should be printed ?\t";
            cin>>n;
            
            for(i = 1 ; i<=n ; i++)
            {
                for(j = 1 ; j<=n; j++)
                {
                   if (j <= n-i)
                   {
                       cout<<" ";
                   }
                   else
                   {
                     cout<<"*";
                   }
                   
                }
                cout<<"\n";
            }
        }

        if (in3 == 6)
        {
            int n, j, i;
            cout << "You opted for the task"<< " --  " << array1[in3 - 1] << "\n\n";
            cout<<"Enter the no. of tiimes the pattern to be printed -- ";
            cin>>n;
            for(i = 0 ; i<=n ;  i++)
            {
                for(j= 0 ; j<=i ; j++)
                {
                    cout<<i;

                }
                cout<<"\n";
            }
        }
        
        if (in3 == 7)
        {
            cout << "You opted for the task"<< " --  " << array1[in3 - 1] << "\n\n";
        }
       
        if (in3 == 8)
        {
            cout << "You opted for the task"<< " --  " << array1[in3 - 1] << "\n\n";
        }
        
        if (in3 == 9)
        {
            cout<<"You opted for the task"<< " --  " << array1[in3 - 1] << "\n\n";
        }
        
        if (in3 == 10)
        {
            cout << "You opted for the task"<< " --  " << array1[in3 - 1] << "\n\n";
        }
        
        if (in3 == 11)
        {
            cout<<"You opted for the task"<< " --  " << array1[in3 - 1] << "\n\n";
        }
    }
    cout<<"\n";
    cout<<"#############TASK PERFORMED SUCESSFULLY!!###########################TASK PERFORMED SUCESSFULLY!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!ENDING THE PROGRAMM #################################\n";
    }
    return 0;
}
