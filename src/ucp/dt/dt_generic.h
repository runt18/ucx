/**
 * Copyright (C) Mellanox Technologies Ltd. 2001-2015.  ALL RIGHTS RESERVED.
 *
 * See file LICENSE for terms.
 */


#ifndef UCP_DATATYPE_H_
#define UCP_DATATYPE_H_

#include <ucp/api/ucp.h>


/**
 * Generic datatype structure.
 */
typedef struct ucp_dt_generic {
    ucp_generic_dt_ops_t     *ops;
    void                     *context;
} ucp_dt_generic_t;


static inline ucp_dt_generic_t* ucp_dt_generic(ucp_datatype_t datatype)
{
    return (ucp_dt_generic_t*)(void*)(datatype & ~UCP_DATATYPE_CLASS_MASK);
}

#endif