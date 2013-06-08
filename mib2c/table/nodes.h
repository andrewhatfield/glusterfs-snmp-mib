/*
 * Note: this file originally auto-generated by mib2c using
 *        $
 */
#ifndef NODES_H
#define NODES_H

/** other required module components */
config_require(nodes_access)
    config_require(nodes_checkfns)

    /*
     * function declarations 
     */
     void            init_nodes(void);
     void            initialize_table_nodeTable(void);
     Netsnmp_Node_Handler nodeTable_handler;


/*
 * column number definitions for table nodeTable 
 */
#include "nodes_columns.h"

/*
 * enum definions 
 */
#include "nodes_enums.h"

#endif /** NODES_H */