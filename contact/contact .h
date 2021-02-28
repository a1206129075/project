#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#include<stdio.h>
#include<string.h>

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//枚举函数
enum Option
{
	EXIT,  //0
	ADD,   //1
	DEL,   //2
	SEARCH,//3
	MODIFY,//4
	SHOW,  //5
	SORT,//6
	SAVE 
};
//通讯录结构
struct Contact
{
	struct PeoInfo data[MAX];
	int size;
};
//声明函数
void InitContact(struct Contact* ps);//初始化通讯录 
void AddContact(struct Contact* ps); //增加一个信息到通讯录
void ShowContact(const struct Contact* ps);//打印通讯录的信息
void DelContact(struct Contact* ps);//删除指定信息
void SearchContact(struct Contact* ps);//查找信息
void ModifyContact(struct Contact* ps);//修改信息
void SaveContact(struct Contact* ps);//保存信息
void SortContact(struct Contact* ps);//排序信息