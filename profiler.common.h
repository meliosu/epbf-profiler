#ifndef PROFILER_COMMON_H
#define PROFILER_COMMON_H

typedef struct {
    int tid;
    int cookie;
    unsigned long start;
    unsigned long end;
} event_t;

#endif /* PROFILER_COMMON_H */
