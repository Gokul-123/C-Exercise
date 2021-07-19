#include <stdio.h>

main()
{
    int root1,root2;
    enum standard {first,second,fourth};
    enum standard s1,s2;
    printf("ENter the roll number for two students");
    scanf("%d%d",&root1,&root2);
    s1=second ;
    s2=fourth;
    printf("the roll number %d is admitted to %d standard ",root1,s1);
    return 0;
}
