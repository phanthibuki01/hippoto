#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;

struct sinhvien
{
	char ten[20];
	int dai;
};

void congchuoi(sinhvien *sv, char str)
{
	char *tmp = new char[sv->dai+2];
	sv->dai++;
	for(int i=0;i<sv->dai;i++)
	{
		tmp[i] = sv->ten[i];
	}
	tmp[sv->dai] = str;
	printf("\n%s",str);
//	delete  sv.ten;
	for(int i=0;i<sv->dai;i++)
	{
		sv->ten[i] = tmp[i];
	}
	return;
}

int main()
{
	sinhvien *sv;
	sv->dai=12;
	char ten[20] = {"Ho Hoai Anh"};
	sv->ten = &ten;
	char str[20];
	printf("Nhap chuoi bat ky: ");
	scanf("%s", &str);
	
	for(int i=0; i< strlen(str);i++)
	{
		congchuoi(sv, str[i]);
	}
	printf("Chuoi hoan tat: %s",sv->ten);
}

