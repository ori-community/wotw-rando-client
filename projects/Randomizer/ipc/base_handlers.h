#pragma once

#include <Core/enums/actions.h>
#include <Core/enums/uber_state.h>
#include <Randomizer/macros.h>

RANDOMIZER_C_DLLEXPORT void report_seed_reload();
RANDOMIZER_C_DLLEXPORT void report_uber_state_change(UberStateGroup group, int state, double value);
RANDOMIZER_C_DLLEXPORT void report_input(Action type, bool pressed);