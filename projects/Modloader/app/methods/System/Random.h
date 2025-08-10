#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Random.h>

namespace app::classes::System::Random {
    IL2CPP_REGISTER_METHOD(0x022806C0, void, ctor_1, app::Random* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02280710, void, ctor_2, app::Random* this_ptr, int32_t seed)
    IL2CPP_REGISTER_METHOD(0x022809F0, double, Sample, app::Random* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02280A10, int32_t, InternalSample, app::Random* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02280AE0, int32_t, Next_1, app::Random* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02280AF0, double, GetSampleForLargeRange, app::Random* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02280B50, int32_t, Next_2, app::Random* this_ptr, int32_t min_value, int32_t max_value)
    IL2CPP_REGISTER_METHOD(0x02280D20, int32_t, Next_3, app::Random* this_ptr, int32_t max_value)
    IL2CPP_REGISTER_METHOD(0x00980110, double, NextDouble, app::Random* this_ptr)
} // namespace app::classes::System::Random
