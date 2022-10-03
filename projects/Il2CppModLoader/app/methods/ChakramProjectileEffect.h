#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ChakramProjectileEffect {
    IL2CPP_REGISTER_METHOD(0x01040E70, void, Initialize, (app::ChakramProjectileEffect * this_ptr, app::ChakramProjectile* chakram))
    IL2CPP_REGISTER_METHOD(0x01041180, void, OnTrigger, (app::ChakramProjectileEffect * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477BC28, ChakramProjectileEffect_OnTrigger__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010414C0, void, Update, (app::ChakramProjectileEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010415D0, void, ctor, (app::ChakramProjectileEffect * this_ptr))
} // namespace app::classes::ChakramProjectileEffect
