#include <stdio.h>
int to_int(char a[], size_t size){
    char nums_c[10] = {'1','2','3','4','5','6','7','8','9','0'};
    int nums_i[10] = {1,2,3,4,5,6,7,8,9,0};
    int can_con = 0;
    int num_q = 0;
    int is_num = 0;
    int i_arr[10];

    

    for(int i = 0; i < 11; i++){
        if(a[0] == nums_c[i]){
            can_con = 1;
            break;
        } 
    }

    if(can_con == 0){
        printf("The string must begin with a number!");
        return 1;
    }

    for(int i = 0; i < 10; i++){
        i_arr[i] = 0;
    }

    for(int i = 0; i < size; i++){
        for(int j = 0; j < 10; j++){
            if(a[i] == nums_c[j]){
                is_num = 1;
                i_arr[i] = nums_i[j];
                break;
            }
            else{is_num = 0;}

        }
        if(is_num == 1){num_q++;}
        else{break;}
    }
    
    int ptr = 1;

    for(int i = 0; i < num_q - 1; i++){
        ptr *= 10;
    }

    int num = 0;

   
    for(int i = 0; i < num_q; i++){
        num += i_arr[i] * ptr;
        ptr /= 10;
    }

    return num;
}