#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FloatLUT_SampleCoord__Boxed.h>

namespace app::classes::Swing::FloatLUT_SampleCoord {
    IL2CPP_REGISTER_METHOD(0x0014B250, void, ctor, app::FloatLUT_SampleCoord__Boxed* this_ptr, int32_t i, float t)
}
