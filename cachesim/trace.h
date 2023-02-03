#ifndef __TRACE_H__
#define __TRACE_H__

#include "log.h"

#define MTRACE_COMMON_FMT "ADDR=[%x], WDATA=[%x], WMASK=[%x]; " \
"WAY=[%d], OLD LINE:[STAT:%x | BASE:%x | OFF:%x]=[%x] -> " \
"NEW LINE:[STAT:%x | BASE:%x | OFF:%x]=[%x]"

#define MTRACE_WDIRTY_FMT "Write to Memory Address: %08lx"

#define MTRACE_WDIRTY(blknum) LOG("\t"MTRACE_WDIRTY_FMT"\n", blknum);

#endif
