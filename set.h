#include <stdio.h>
#include <stdlib.h>
#include "types.h"

#define MAX_IDS 1064

typedef struct _Set Set;


/*Functions*/

Set* set_create();
STATUS set_destroy(Set* set);
STATUS set_addId(Set* set, Id id);
STATUS set_delId(Set* set, Id id);
void set_print(FILE* pf,Set* set);




