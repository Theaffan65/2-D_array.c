// #include<stdio.h>
// int main()
// {
//     int arr [2][3] = {{1,2,3},{4,5,6}};
//     for(int i = 0;i<2;i++){
//        //printf("\n");
//        for(int j = 0;j<3;j++){
//         printf("%d ",arr[i][j]);
        
//     }
//     printf("\n");
//     }
//     return 0;
// } 



// #include<stdio.h>
// int main()
// {
//     int r;
//     printf("Enter the number of rows ");
//     scanf("%d",&r);

//     int c;
//     printf("Enter the number of column ");
//     scanf("%d",&c);

//     int arr [r][c] ;
//     printf("Enter the Element of rows and columns :");
//     for(int i = 0;i<r;i++){
//         for(int j = 0;j<c;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\n");
//     for(int i = 0;i<r;i++){
//         for(int j = 0;j<c;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// } 



// #include<stdio.h>
// int main()
// {
//    int arr[2][3] = {1,2,3,4,5,3};
//    int brr[2][3] = {5,6,7,8,7,4};
//    //int result[2][2];
//     printf("Enter the Element of rows and columns :");
//     for(int i = 0;i<2;i++){
//         for(int j = 0;j<3;j++){
//           arr[i][j] = arr[i][j] + brr[i][j];
//         }
//     }
//     printf("\n");
//     for(int i = 0;i<2;i++){
//         for(int j = 0;j<3;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// } 


// #include<stdio.h>
// int main()
// {
//     // int r , c;
//     // printf("Enter the number of rows: ");
//     // scanf("%d",&r);
//     //  printf("Enter the number of column: ");
//     // scanf("%d",&c);
//     // printf("Enter the all element\n");
//     int arr[4][5] = {{1,2,3,4,5},{5,4,3,2,1},{6,7,8,9,10},{10,9,8,7,6}};
//    //int brr[r][c];
//         int sum  = 0;
    // for(int i = 0;i<=2;i++){
    //     for(int j = 1;j<=4;j++){
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
//     for(int i = 0;i<4;i++){
//         for(int j = 0;j<=4;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     for(int i = 0;i<4;i++){
//         for(int j = 0;j<=4;j++){
//          sum = sum + arr[i][j];
//         }
//         printf("\n");
//     }
//         printf("%d",sum);


//     return 0;
// } 


// #include<stdio.h>
// int main(){
//     int arr[2][3] = {{1,2,3},{4,5,6}};
//     // for(int i = 0;i<2;i++){
//     // for(int j = 0;j<3;j++){
//     //     printf("%d ",arr[j][i]);
//     // }printf("\n");
//     // }
// for(int i = 0;i<3;i++){
//     for(int j = 0;j<2;j++){
//         printf("%d ",arr[j][i]);
//     }printf("\n");
// }
// }

// #include<stdio.h>
// int main(){
//      int n ;
//      printf("Enter the number of rows / column:");
//      scanf("%d",&n);
//      int arr[n][n];
// for(int i = 0;i<n;i++){
//     for(int j = 0;j<n;j++){
//         scanf("%d",&arr[i][j]);
// }
//     }
//     //Transpose
// for(int i = 0;i<n;i++){
//     for(int j = i;j<n;j++){
//        int temp = arr[i][j];
//        arr[i][j] = arr[j][i];
//        arr[j][i] = temp;

//     }
// }
// printf("\n");
// for(int i = 0;i<n;i++){
//     for(int j = 0;j<n;j++){
//       printf("%d ",arr[i][j]);

//     }printf("\n");
// }
//    return 0;
// }


// #include<stdio.h>
// int main(){
//      int n ;
//      printf("Enter the number of rows :");
//      scanf("%d",&n);
//        int m ;
//      printf("Enter the number of column:");
//      scanf("%d",&m);
//      int arr[n][m];
//      for(int i =0;i<n;i++){
//         for(int j =0;j<m;j++){
//             scanf("%d",&arr[i][j]);
//         }
//      }
//       for(int i =0;i<n;i++){
//         if(i%2==0){
//         for(int j =0;j<m;j++){
//             printf("%d ",arr[i][j]);
//         }
//         }
//         else{
//             for(int j =m-1;j>=0;j--){
//             printf("%d ",arr[i][j]);
//         }
//         }
//         printf("\n");
//      }
     
//    return 0;
// }

#include<stdio.h>
int main(){
     int n ;
     printf("Enter the number of rows :");
     scanf("%d",&n);
       int m ;
     printf("Enter the number of column:");
     scanf("%d",&m);
     int arr[n][m];
     for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
     }
      for(int i =0;i<n;i++){
        if(i%2==0){
        for(int j =0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        }
        else{
            for(int j =m-1;j>=0;j--){
            printf("%d ",arr[i][j]);
        }
        }
        printf("\n");
     }
     
   return 0;
}