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

//ö�ٺ���
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
//ͨѶ¼�ṹ
struct Contact
{
	struct PeoInfo data[MAX];
	int size;
};
//��������
void InitContact(struct Contact* ps);//��ʼ��ͨѶ¼ 
void AddContact(struct Contact* ps); //����һ����Ϣ��ͨѶ¼
void ShowContact(const struct Contact* ps);//��ӡͨѶ¼����Ϣ
void DelContact(struct Contact* ps);//ɾ��ָ����Ϣ
void SearchContact(struct Contact* ps);//������Ϣ
void ModifyContact(struct Contact* ps);//�޸���Ϣ
void SaveContact(struct Contact* ps);//������Ϣ
void SortContact(struct Contact* ps);//������Ϣ