#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FloatLUT__Boxed.h>
#include <Modloader/app/structs/FloatLUT_SampleCoord.h>
#include <Modloader/app/structs/FloatRange.h>

namespace app::classes::Swing::FloatLUT {
    IL2CPP_REGISTER_METHOD(0x0014AFB0, void, ctor, (app::FloatLUT__Boxed * this_ptr, int32_t sample_count))
    IL2CPP_REGISTER_METHOD(0x0014B070, void, SetRange, (app::FloatLUT__Boxed * this_ptr, app::FloatRange range))
    IL2CPP_REGISTER_METHOD(0x0014B0A0, app::FloatLUT_SampleCoord, GetSampleCoord, (app::FloatLUT__Boxed * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x0014B0B0, float, Evaluate_1, (app::FloatLUT__Boxed * this_ptr, app::FloatLUT_SampleCoord sample))
    IL2CPP_REGISTER_METHOD(0x0014B0C0, float, Evaluate_2, (app::FloatLUT__Boxed * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x0014B0E0, float, GetLocalMaxima, (app::FloatLUT__Boxed * this_ptr, float from_time, float to_time))
} // namespace app::classes::Swing::FloatLUT
