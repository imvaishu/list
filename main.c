#include "list.h"
#include "search.h"

int main(void)
{
  List *list = create_list(10);
  take_user_inputs(list);
  search_values(list);
  free_list(list);
  return 0;
}