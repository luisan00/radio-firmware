/*
 * Copyright (C) 2014 Freie Universität Berlin
 * Copyright (C) 2014 Lotte Steenbrink <lotte.steenbrink@fu-berlin.de>
 * Copyright (C) 2020 Locha Inc
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     net_aodvv2
 * @{
 *
 * @file
 * @brief       AODVVv2 Message Writer
 *
 * @author      Lotte Steenbrink <lotte.steenbrink@fu-berlin.de>
 * @author      Gustavo Grisales <gustavosinbandera1@hotmail.com>
 * @author      Jean Pierre Dudey <jeandudey@hotmail.com>
 */

#ifndef AODVV2_READER_H
#define AODVV2_READER_H

#include "net/rfc5444.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief   Register AODVv2 message reader
 *
 * @param[in] reader Pointer to the reader context.
 */
void aodvv2_reader_init(struct rfc5444_reader *reader);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* AODVV2_READER_H */
/** @} */
