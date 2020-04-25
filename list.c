#include <stdio.h>
#include <stdlib.h>
#include "list.h"

List *create_list(int value)
{
  List *list = malloc(sizeof(List));

  list->first = NULL;
  list->last = NULL;
  list->count = 0;
  return list;
}

Node *create_node(int value)
{
  Node *new_node = malloc(sizeof(Node));
  new_node->value = value;
  new_node->next = NULL;

  return new_node;
}

void insert_node(List *list,int value)
{
  Node *new_node = create_node(value);
  if(list->first == NULL)
  {
    list->first = new_node;
  }
  else
  {
    list->last->next = new_node;
  }
  list->last = new_node;
  list->count++;
}

void display_list(List *list)
{
  Node *p_walk = list->first;
  while(p_walk != NULL)
  {
    printf("%d",p_walk->value);
    p_walk = p_walk->next;
  }
}

void free_list(List *list)
{
  Node *p_walk = list->first;
  Node *free_element = NULL;
  while(p_walk != NULL)
  {
    free_element = p_walk;
    p_walk = p_walk->next;
    free(free_element);
  }
  free(list);
}
