#ifndef __SEARCH_H
#define __SEARCH_H

typedef int INPUT;

void take_user_input(int *input,char *text);

void take_user_inputs(List *list);

int search_value(List *list,int value);

void search_values(List *list);

#define INPUT_MESSAGE "please enter a number"
#define SEARCH_MESSAGE "\nwhat number would you like to search for?"

#endif