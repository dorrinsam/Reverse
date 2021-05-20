#include <stdio.h>

 int main(){

   int arr[2][2][2], arr24[2][4], arr8[8];
     for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
           for (int k = 0; k < 2; k++){
             scanf("%4d", &arr[i][j][k]);
                                          }
                                             }
                                                }



   int m = 0, n = 0;
     for(int i = 0; i < 2; i++){
       for(int j = 0; j < 2; j++){
         for(int k = 0; k < 2; k++){
            arr24[m][n] = arr[i][j][k];
                if(n >= 3){
                   m++;
                   n = 0;
                                }
                     else{
                       n++;
                                  }
                                     }
                                        }
                                           }
    for(int i = 0; i < 2; i++){
      for(int j = 0; j < 4; j++){
        printf("%d ", arr24[i][j]);
                                                    }
          printf("\n");
                                                        }
            printf("------\n");

    int p = 0;
      for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
           for(int k = 0; k < 2; k++){
              arr8[p] = arr[i][j][k];
                p++;
                                        }
                                          }
                                            }
      for(int i = 0; i < 8; i++){
        printf("%d ", arr8[i]);
                                               }
          printf("\n\n");
                                                    }
