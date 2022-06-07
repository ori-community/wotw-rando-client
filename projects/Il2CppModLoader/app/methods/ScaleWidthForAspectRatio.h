#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ScaleWidthForAspectRatio {
    IL2CPP_REGISTER_METHOD(0x00934910, void, OnAspectRatioChanged, (app::ScaleWidthForAspectRatio * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473B698, ScaleWidthForAspectRatio_OnAspectRatioChanged__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00934920, void, Start, (app::ScaleWidthForAspectRatio * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00934BA0, void, OnDestroy, (app::ScaleWidthForAspectRatio * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00934D50, void, ApplyAspect, (app::ScaleWidthForAspectRatio * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ScaleWidthForAspectRatio * this_ptr))
}
