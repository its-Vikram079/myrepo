// // #include<stdio.h>
// // int main()
// // {int rows;
// // printf("enter the no. of rows and columns:");
// // scanf("%d",&rows);
// //     for(int i=0;i<rows;i++){
// //     for(int j=0;j<=i;j++)
// //     {
// //     printf("%c",'A'+j);
// //     }
// // //     printf("\n");
// // //     }

// // //  return 0;
// // // } 

// // // #include<stdio.h>
// // // int main()
// // // {int rows;
// // // printf("enter the no. of rows and columns:");
// // // scanf("%d",&rows);
// // //     for(int i=0;i<rows;i++){
// // //     for(int j=0;j<=i;j++)
// // //     {
// // //     printf("%d",j+1);
// // //     }
// // //     printf("\n");
// //     }
// //  return 0;
// // } 
 
// // #include<stdio.h>
// // int main()
// // {int rows;
// // printf("enter the no. of rows and columns:");
// // scanf("%d",&rows);
// //     for(int i=0;i<rows;i++){
// //     for(int j=0;j<=i;j++)
// //     {
// //     printf("*");
// //     }
// //     printf("\n");
// //     }

// //   return 0;
// // }

// #include<stdio.h>
// int main()
// {int rows;
// printf("enter the no. of rows:");
// scanf("%d",&rows);
// int a=1;
//     for(int i=1;i<=rows;i++){
//         if(i%2!=0){
//             a=1;
//         }
//         else{
//             a=0;
//         }
//     for(int j=1;j<=i;j++)
//     {
//     printf("%d ",a);
//     if(a==0){
//         a=1;
//     }
//     else{
//         a=0;
//     }
//     }
//     printf("\n");
//     }

//  return 0;
// } 



// #include<stdio.h>
// int main()
// {int rows;
// printf("enter the no. of rows and columns:");
// scanf("%d",&rows);
//     for(int i=0;i<rows;i++){
//     for(int j=0;j<=i;j++)
//     {
//     printf("%c",'A'+j);
//     }
// //     printf("\n");
// //     }

// //  return 0;
// // } 

// // #include<stdio.h>
// // int main()
// // {int rows;
// // printf("enter the no. of rows and columns:");
// // scanf("%d",&rows);
// //     for(int i=0;i<rows;i++){
// //     for(int j=0;j<=i;j++)
// //     {
// //     printf("%d",j+1);
// //     }
// //     printf("\n");
//     }
//  return 0;
// } 
 
// #include<stdio.h>
// int main()
// {int rows;
// printf("enter the no. of rows and columns:");
// scanf("%d",&rows);
//     for(int i=0;i<rows;i++){
//     for(int j=0;j<=i;j++)
//     {
//     printf("*");
//     }
//     printf("\n");
//     }

//   return 0;
// }
// ***Alternate method****//

#include<stdio.h>
int main()
{int rows;
printf("enter the no. of rows:");
scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
    for(int j=1;j<=i;j++)
    {
   
    if(i==j ||(i+j)%2==0){
    
         printf(" 1 ");
    }
    else{
        printf(" 0 ");
    }
    }
    
    printf("\n");
    }

 return 0;
} 