#include "set.h"

struct _Set {
	Id id[MAX_IDS];
	Id num_ids;
};

Set* set_create() {
  int i;
  Set *newSet = NULL;

  if (id == NO_ID)
    return NULL;

  newSet = (Set *) malloc(sizeof (Set));

  if (newSet == NULL) {
    return NULL;
  }
  newSet->num_ids = 0;

  for(i=0;i<MAX_IDS;i++) {
    newSet->id[i]=-1;
  }

  return newSet;
}

STATUS set_destroy(Set* set) {
  if (!set) {
    return ERROR;
  }
  free(set);
  set = NULL;

  return OK;
}



STATUS set_addId(Set* set, Id id) {
  int i = 0;

  if (set == NULL) {
    return ERROR;
  }

  while ( set->id[i] != -1){
    i++;
  }

  if (i >= MAX_IDS) {
    return ERROR;
  }

  set->id[i] = id;
  (set->num_ids)++;

  return OK;
}



STATUS set_delId(Set* set,Id id){
	int i = 0;
	if (set == NULL){
		return ERROR;
	}
	while (set->id[i] != id){
		i++;
	}
	if (i >= MAX_IDS) {
    	return ERROR;
  	}
  	set->id[i] = -1;
  return OK;
}