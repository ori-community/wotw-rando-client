#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ChakramProjectile.h>
#include <Modloader/app/structs/ChakramProjectileEffect.h>

namespace app::classes::ChakramProjectileEffect {
    IL2CPP_REGISTER_METHOD(0x01040E70, void, Initialize, app::ChakramProjectileEffect* this_ptr, app::ChakramProjectile* chakram)
    IL2CPP_REGISTER_METHOD(0x01041180, void, OnTrigger, app::ChakramProjectileEffect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010414C0, void, Update, app::ChakramProjectileEffect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010415D0, void, ctor, app::ChakramProjectileEffect* this_ptr)
} // namespace app::classes::ChakramProjectileEffect
