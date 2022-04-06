#pragma once

#include <macros.h>
#include <enums/actions.h>

INJECT_C_DLLEXPORT void report_seed_reload();
INJECT_C_DLLEXPORT void report_uber_state_change(int group, int state, double value);
INJECT_C_DLLEXPORT void report_input(Action type, bool pressed);