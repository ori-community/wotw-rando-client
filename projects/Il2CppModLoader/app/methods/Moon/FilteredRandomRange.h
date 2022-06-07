#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::FilteredRandomRange {
    IL2CPP_REGISTER_METHOD(0x02559030, void, ctor, (app::FilteredRandomRange * this_ptr, app::IRng * rng, int32_t history_length))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, SetMin, (app::FilteredRandomRange * this_ptr, uint32_t min))
    IL2CPP_REGISTER_METHOD(0x00E39C80, void, SetMax, (app::FilteredRandomRange * this_ptr, uint32_t max))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, SetRepeatingRunLength, (app::FilteredRandomRange * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x025590E0, uint32_t, GetNext, (app::FilteredRandomRange * this_ptr, bool shift_history))
    IL2CPP_REGISTER_METHOD(0x02559810, void, ShiftHistory, (app::FilteredRandomRange * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025598B0, uint32_t, GetCurrent, (app::FilteredRandomRange * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025598F0, uint32_t, GetHistory, (app::FilteredRandomRange * this_ptr, int32_t index))
}
