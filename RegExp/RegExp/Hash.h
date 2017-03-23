#pragma once
typedef struct simplelist
{
	char *data;
	simplelist *next;
};
int addlist(simplelist **lat, char *str);
int print(simplelist *list);