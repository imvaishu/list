#include <stdio.h>
#include "list.h"
#include "search.h"

void take_user_input(INPUT *input,char *text)
{
  printf("%s\n",text);
  scanf("%d",input);
}

void take_user_inputs(List *list)
{
  INPUT input;
  take_user_input(&input,INPUT_MESSAGE);

  while(input != -99)
  {
    insert_node(list,input);
    take_user_input(&input,INPUT_MESSAGE);
  }
}

INPUT search_value(List *list,INPUT value)
{
  Node *p_walk = list->first;
  INPUT position = -1;
  for(int i = 0 ; i < list->count ; i++)
  {
    if(p_walk->value == value)
    {
      position = i;
    }
    p_walk = p_walk->next;
  }
  return position;
}

void search_values(List *list)
{
  INPUT input;
  take_user_input(&input,SEARCH_MESSAGE);

  while(input != -99)
  {
    int position = search_value(list,input);
    if(position >= 0)
    {
      printf("%d is present in the list at position %d\n",input,position);
    }
    else{
      printf("%d is not present in the list\n",input);
    }
    take_user_input(&input,SEARCH_MESSAGE);
  }
}