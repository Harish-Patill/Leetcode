#include<limits.h>

int reverse(int x){
    long int rev=0;
    int temp=0;
    // long int lowest_bit=pow(-2,31);
    // long int highest_bit=((pow(2,31)) - 1);

    while(x!=0){

        rev = rev*10 + x%10; 
        x=x/10;
        
        // if (rev > highest_bit || rev < lowest_bit)
        //     return 0;
        
        if (rev > INT_MAX || rev < INT_MIN)
            return 0;
    }

    return rev;
}

/*
Normal number reversing logic: will update the rev variable continuously until it reaches 0.
a). Will update the rev with rev*10, cause we do not need all the new vals to accumlate in the same spot, 
b). then will append the last digit by adding it to the rev variable, 
will continue the steps 'a' and 'b' until the original val reaches 0.


We could have taken the while loop condition as while(x>0), but this will not work for the inputs that are negative
therefore the condition is while(x!=0)

The question states that the rev val should not go out of the reange [-231, 231 - 1], therefore ive make two variables
with those values and compare them to the rev value, is they go out of bound, we are supposed to return 0;
    We can also use the inbuilt macro, INT_MAX and INT_MIN, these are part of the limits.h header file.
*/