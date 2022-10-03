#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ScalePositionForAspectRatio {
    IL2CPP_REGISTER_METHOD(0x00933D40, void, OnAspectRatioChanged, (app::ScalePositionForAspectRatio * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047475B0, ScalePositionForAspectRatio_OnAspectRatioChanged__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00933D50, void, Start, (app::ScalePositionForAspectRatio * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933FC0, void, OnDestroy, (app::ScalePositionForAspectRatio * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00934160, void, ApplyAspect, (app::ScalePositionForAspectRatio * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ScalePositionForAspectRatio * this_ptr))
} // namespace app::classes::ScalePositionForAspectRatio
