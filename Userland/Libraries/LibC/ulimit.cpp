/*
 * Copyright (c) 2018-2020, Andreas Kling <kling@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <AK/Format.h>
#include <assert.h>
#include <sys/resource.h>
#include <ulimit.h>
#include <string.h>

extern "C" {

long ulimit([[maybe_unused]] int cmd, [[maybe_unused]] long newlimit)
{
    dbgln("FIXME: Implement getrusage()");
    TODO();
    return -1;
}

int getrusage([[maybe_unused]] int who, struct rusage* usage)
{
    dbgln("FIXME: Implement getrusage()");
    memset(usage, 0, sizeof(*usage));
    return 0;
}
}
