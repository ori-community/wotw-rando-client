#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TargetTransformPostprocess {
    IL2CPP_REGISTER_METHOD(0x003FF8B0, int32_t, get_Order, (app::TargetTransformPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE4900, void, Process, (app::TargetTransformPostprocess * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::TargetTransformPostprocess * this_ptr))
}
