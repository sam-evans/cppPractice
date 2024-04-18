#include <iostream>
/*
Output
       1
     2 3
   4 5 6
7 8 9 10
*/
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int spacePad = 7;
    int lineNum = 1;
    for (int i=0; i<size; i++){
    
        if (i >0){
            int temp = lineNum;
            int linePad = spacePad - (2*(lineNum-1));
            if (linePad == 1){
                   printf("%*s",0, ""); 
                }
            else{
                printf("%*s", linePad, "");
            }
            while (temp >0){
                if (temp == 1){
                    printf("%d\n", arr[i]);
                }
                else{
                    printf("%d", arr[i]);
                    printf(" ");
                    i++;
                }
                
                temp--;
            }
        }
        else{
            printf("%*s", spacePad, "");
            printf("%d\n", arr[i]);
        }
        lineNum++;
    }
}