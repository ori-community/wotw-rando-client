#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AllContainer_1_CameraShake_.h>
#include <Modloader/app/structs/CameraShake.h>

namespace app::classes::AllContainer_1_CameraShake_ {
    IL2CPP_REGISTER_METHOD(0x019D79D0, void, Clear, (app::AllContainer_1_CameraShake_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04749738, AllContainer_1_CameraShake__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7830, void, Add, (app::AllContainer_1_CameraShake_ * this_ptr, app::CameraShake* item))
    IL2CPP_REGISTER_METHODINFO(0x0470ED60, AllContainer_1_CameraShake__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7990, void, Remove, (app::AllContainer_1_CameraShake_ * this_ptr, app::CameraShake* item))
    IL2CPP_REGISTER_METHODINFO(0x047153A8, AllContainer_1_CameraShake__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::AllContainer_1_CameraShake_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047008A0, AllContainer_1_CameraShake___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7800, app::CameraShake*, get_Item, (app::AllContainer_1_CameraShake_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04767520, AllContainer_1_CameraShake__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D77E0, int32_t, get_Count, (app::AllContainer_1_CameraShake_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04710930, AllContainer_1_CameraShake__get_Count__MethodInfo)
} // namespace app::classes::AllContainer_1_CameraShake_
