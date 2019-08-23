#include<stdio.h>
#include<math.h>

main(){
    float a, b, c, r1, r2, y, w, z;
    printf("Enter the vlaue of a, b and c: \n");
    scanf("%f%f%f", &a, &b, &c);

    y = b*b - 4*a*c;
    w = 2*a;

    if (y==0){
        printf("The roots are equal and that is %f.\n", -b/w);
    }
    else{
        if(y<0){
            printf("The roots are complex.\n");
        }
        else{
            z = sqrt(y);
            r1 = (-b + z) / w;
            r2 = (-b - z) / w;
            printf("The two distinct roots are %f and %f.\n", r1, r2);
        }
    }
}