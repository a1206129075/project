#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{//int i;
 char pass1[]="Are you ok!!!!";
 char pass2[]="##############";
 int left=0;
 int right=strlen(pass1);//¼ÆËã ×Ö·û´®³¤¶È 
 while(left<=right)
 {pass2[left]=pass1[left];
  pass2[right]=pass1[right];
  Sleep(500);//ÐÝÏ¢500ºÁÃë£¬0.5Ãë 
  system("cls");//cls---ÇåÆÁ 
  printf("%s\n",pass2);
  left++;right--;
 };
 //system("cls");
 //for(i=0;i<right;i++)
 //{pass2[i]
 //}
return 0;
 } 
