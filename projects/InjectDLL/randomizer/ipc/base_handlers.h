#pragma once

#include <enums/actions.h>
#include <enums/uber_state.h>
#include <macros.h>

INJECT_C_DLLEXPORT void report_seed_reload();
INJECT_C_DLLEXPORT void report_uber_state_change(UberStateGroup group, int state, double value);
INJECT_C_DLLEXPORT void report_input(Action type, bool pressed);