#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{//int i;
 char pass1[]="Are you ok!!!!";
 char pass2[]="##############";
 int left=0;
 int right=strlen(pass1);//���� �ַ������� 
 while(left<=right)
 {pass2[left]=pass1[left];
  pass2[right]=pass1[right];
  Sleep(500);//��Ϣ500���룬0.5�� 
  system("cls");//cls---���� 
  printf("%s\n",pass2);
  left++;right--;
 };
 //system("cls");
 //for(i=0;i<right;i++)
 //{pass2[i]
 //}
return 0;
 } 
