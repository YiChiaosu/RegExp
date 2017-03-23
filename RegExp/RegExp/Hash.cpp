#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Hash.h"
int addlist(simplelist **lat, char *str)
{
	if (*lat == NULL)
	{
		*lat = (simplelist*)malloc(sizeof(simplelist));
		(*lat)->data = (char*)malloc(sizeof(char)*strlen(str));
		strcpy((*lat)->data, str);
		(*lat)->next = NULL;
		return 1;
	}
	else
	{
		simplelist *plist = *lat;
		while (plist->next != NULL)  plist = plist->next;
		plist->next = (simplelist*)malloc(sizeof(simplelist));
		plist = plist->next;
		plist->data = (char*)malloc(sizeof(char)*strlen(str));
		strcpy(plist->data, str);
		plist->next = NULL;
		return 1;
	}
}

int print(simplelist *list)
{
	if (list == NULL)
	{
		printf("this list is empty\n");
		return 0;
	}
	int r = 0;
	do {
		printf("%s\n", list->data);
		r++;
		list = list->next;
	} while (list != NULL);
	return r;
}