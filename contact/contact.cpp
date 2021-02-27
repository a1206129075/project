#define _CRT_SECURE_NO_WARNINGS 1
#include"contact .h"

void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//设置通讯录最初只有零个元素
}

void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("The contact is full!\nThe text is not add.");
	}
	else
	{
		printf("please input your name:\n");
		scanf("%s", ps->data[ps->size].name);
		printf("please input your age:\n");
		scanf("%d",&( ps->data[ps->size].age));
		printf("please input your sex:\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("please input your telephone:\n");
		scanf("%s", ps->data[ps->size].tele);
		printf("please input your address:\n");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("Add success.\n");
	}

	
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("The constat is empty.\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","name","age","sex","telephone","address");
		for (i = 0;i < ps->size;i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}

}
void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("Please enter the name information you want to delete:\n");
	scanf("%s", name);
	int i = 0;
	for (i = 0;i < ps->size;i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			break;
		}
	}
	if (i == ps->size)
	{
		printf("The person to be deleted does not exist.\n");
	}
	else
	{
		int j = 0;
		for (j = i;j < ps->size - 1;j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("Delete success.\n");
	}
}

void SearchContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("Please enter the name information you want to search:\n");
	scanf("%s", name);
	int i = 0;
	for (i = 0;i < ps->size;i++)
	{
		if (0 == strcmp(ps->data[i].name , name))
		{
			break;
		}
	}
	if (i == ps->size)
	{
		printf("The person to be consulted does not exist.\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "name", "age", "sex", "telephone", "address");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[i].name,
			ps->data[i].age,
			ps->data[i].sex,
			ps->data[i].tele,
			ps->data[i].addr);
	}
}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("Please enter the name of the person you want to modify:\n");
	scanf("%s", name);
	int i = 0;
	for (i = 0;i < ps->size;i++)
	{
		if (0==strcmp( ps->data[i].name, name))
		{
			break;
		}
	}
	if (i == ps->size)
	{
		printf("The person to be consulted does not exist.\n");
	}
	else
	{
		printf("please input your name:\n");
		scanf("%s", ps->data[i].name);
		printf("please input your age:\n");
		scanf("%d", &(ps->data[i].age));
		printf("please input your sex:\n");
		scanf("%s", ps->data[i].sex);
		printf("please input your telephone:\n");
		scanf("%s", ps->data[i].tele);
		printf("please input your address:\n");
		scanf("%s", ps->data[i].addr);
		printf("Modified successfully.\n");
	}
	
}

//void SaveContact(struct Contact* ps)
//{
//
//}

void SortContact(struct Contact* ps)
{
	int i = 0, j = 0;
	int tmp = 0;
	for (i = 0;i < ps->size;i++)
	{
		for (j = 0;j < ps->size - 1;j++)
		{
			if (ps->data[j + 1].age > ps->data[j].age)
			{
				tmp = ps->data[j].age;
				ps->data[j].age = ps->data[j + 1].age;
				ps->data[j + 1].age = tmp;
				
			}
		}
	}
	
}