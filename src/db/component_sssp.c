#include "graph.h"
#include <stdio.h>
#include <string.h>

/* Place the code for your Dijkstra implementation in this file */

char* get_name_by_type(schema_t s, base_types_t typeNeeded){
    attribute_t attr = s->attrlist;
    while (attr != NULL){
        if (attr->bt == typeNeeded){
            return(attr->name);
        }
        attr = attr->next;
    }
    return("not found");
}

int
component_sssp(
        component_t c,
        vertexid_t v1,
        vertexid_t v2,
        int *n,
        int *total_weight,
        vertexid_t **path)
{
	
	/*
	 * Figure out which attribute in the component edges schema you will
	 * use for your weight function
	 */
	
    // Iterates through edge schema for first instance of an integer
    // to use as the edge weight
    char* name = get_name_by_type(c->se, 4);
    if (strcmp(name, "not found") == 0){
        return(-1);
    }


	/*
	 * Execute Dijkstra on the attribute you found for the specified
	 * component
	 */



	/* Change this as needed */
	return (-1);
}
