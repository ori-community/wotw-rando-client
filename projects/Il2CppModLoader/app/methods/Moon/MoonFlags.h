#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::MoonFlags {
    IL2CPP_REGISTER_METHOD(0x01119B40, bool, HasFlag, (app::GameObject * go, uint32_t flag))
    IL2CPP_REGISTER_METHOD(0x01B31F60, bool, GetComponentByFlag_1, (app::GameObject * go, uint32_t flag, app::Object** comp))
    IL2CPP_REGISTER_METHOD(0x015F1E50, app::Object*, GetComponentIfHasFlag, (app::GameObject * go, uint32_t flag))
    IL2CPP_REGISTER_METHOD(0x01B31F60, bool, GetComponentByFlag_2, (app::GameObject * go, uint32_t flag, app::CrushPlayer** comp))
    IL2CPP_REGISTER_METHODINFO(0x04771C68, MoonFlags_GetComponentByFlag_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01B31F60, bool, GetComponentByFlag_3, (app::GameObject * go, uint32_t flag, app::DamageDealer** comp))
    IL2CPP_REGISTER_METHODINFO(0x0471EC40, MoonFlags_GetComponentByFlag_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01B31F60, bool, GetComponentByFlag_4, (app::GameObject * go, uint32_t flag, app::MovingPlatformSettings** comp))
    IL2CPP_REGISTER_METHODINFO(0x04775BA0, MoonFlags_GetComponentByFlag_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01B31F60, bool, GetComponentByFlag_5, (app::GameObject * go, uint32_t flag, app::IDashAtackable** comp))
    IL2CPP_REGISTER_METHODINFO(0x04735CE8, MoonFlags_GetComponentByFlag_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01B31F60, bool, GetComponentByFlag_6, (app::GameObject * go, uint32_t flag, app::IPushable** comp))
    IL2CPP_REGISTER_METHODINFO(0x0470F948, MoonFlags_GetComponentByFlag_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01B31F60, bool, GetComponentByFlag_7, (app::GameObject * go, uint32_t flag, app::GrabbableSurface** comp))
    IL2CPP_REGISTER_METHODINFO(0x04731FD8, MoonFlags_GetComponentByFlag_6__MethodInfo)
} // namespace app::classes::Moon::MoonFlags
