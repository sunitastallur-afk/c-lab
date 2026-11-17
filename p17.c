#include <stdio.h>
int main()
{
    char str1[100],str2[100];
    char copy[100],contact [200],reverse[100];
    int len1=0,len2=0;
    int i,j,compare=0,palindrome=1;
    
    printf("enter firs string:");
    scanf("%s",str1);
    printf("enter second string:");
    scanf("%s",str2);
    while (str1[len1]!='\0')
    len1++;
    while (str2[len2]!='\0')
    len2++;
    for (i=0;i<=len1;i++)
    copy [i]=str1[i];
    for (i=0;i<=len1;i++)
    contact [i]=str1[i];
    for (j=0;j<=len2;j++)
    contact [i+j]=str2[j];
    contact[i+j]='\0';
    i=0;
    while (str1[i]!='\0'&&str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            compare=str1[i]-str2[i];
            break;
       }
       i++;
   }
   if(compare==0)
   compare=str1[i]-str2[i];
   for (i=0;i<=len1;i++)
   reverse[i] = str1[len1-1-i];
   reverse[len1]='\0';
   for (i=0;i<=len1;i++)
   {
      if(str1[i]!=reverse[i])
      {
        palindrome=0;
        break;
      }
   }
   printf("length of first string=%d\n",len1);
    printf("length of second string=%d\n",len2);
     printf("copy of first string=%s\n",copy);
      printf("concatenated string=%s\n",contact);
      if(compare==0)
      printf("both strings are equal.\n");
      else if (compare<0)
      printf("first string comes before second string.\n");
      else
      printf("first string comes after second string.\n");
      printf("Reverse of first string = %s\n",reverse);
      if (palindrome==1)
      printf("first stringis a palindrome.\n");
       printf("first stringis not a palindrome.\n");
       return 0;
}
