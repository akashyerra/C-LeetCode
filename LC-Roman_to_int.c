//Leetcode- Problem Roman to Integer conversion
#include<stdio.h>
#include<string.h>
int romanint(char [], int);
int main(){
    char roman[10];
    int len, x;
    scanf("%s", roman);
    len=strlen(roman);
    x=romanint(roman,len);
    printf("%d", x);
    return 0;
}

int romanint(char* roman, int len)
{
    int t['x']={
        ['I']=1,
        ['V']=5,
        ['X']=10,
        ['L']=50,
        ['C']=100,
        ['D']=500,
        ['M']=1000,
    };
    int i, res=0;
    for(i=0; i<len; i++)
    {
        if(t[roman[i]]<t[roman[i+1]])
        {
            res=res-t[roman[i]];
        }
        else
        {
             res=res+t[roman[i]];
        }
    }
    return res;
}