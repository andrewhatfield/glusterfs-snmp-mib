/*
 * Note: this file originally auto-generated by mib2c using
 *        $
 */
#ifndef NODES_ACCESS_H
#define NODES_ACCESS_H

/** User-defined data access functions for data in table nodeTable */
/** row level accessors */
Netsnmp_First_Data_Point nodeTable_get_first_data_point;
Netsnmp_Next_Data_Point nodeTable_get_next_data_point;
int             nodeTable_commit_row(void **my_data_context,
                                     int new_or_del);
void           *nodeTable_create_data_context(netsnmp_variable_list *
                                              index_data, int column);

/** column accessors */
long           *get_nodeIndex(void *data_context, size_t *ret_len);
char           *get_nodeVersion(void *data_context, size_t *ret_len);

#endif                          /* NODES_ACCESS_H */