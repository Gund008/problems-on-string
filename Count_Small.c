/*
Write a Program which accpet String from user and Count number of Small characters.

Input:  "Marvellous Multi OS"
Output: 13

*/

#include<stdio.h>
int CountCapital(char *str)
{
    int iCnt=0;
    
    //filter
    
    while(*str!='\0')
    {
        if((*str>='a') && (*str<='z'))
        {
             iCnt++;
        }
        *str++;
    }
    return iCnt;
}
///////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);

    iRet=CountCapital(arr);

    printf("%d\n",iRet);
    return 0;

}