#define _CRT_SECURE_NO_WARNINGS 1
#include"contact .h"
void menu()
{
		printf("**************************************\n");
		printf("*****  1.add      2.del       ********\n");
		printf("*****  3.search   4.modify    ********\n");
		printf("*****  5.show     6.sort      ********\n");
		printf("*****  7.save     0.exit      ********\n");
		printf("**************************************\n");
}





int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("please input your number:\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case SAVE:
			SaveContact(&con);
			break;
		case EXIT:
			printf("Exit Projects.\n");
			break;
		default:
			printf("input error!\nplease input your number again:\n");
			break;

		}
	} while (input);
	return 0;
}