#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SeinCanPickupCondition {
    IL2CPP_REGISTER_METHOD(0x00DA2F90, bool, Validate, (app::SeinCanPickupCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00DA3040, bool, IsValid, (bool require_safe))
    IL2CPP_REGISTER_METHOD(0x00DA3050, bool, CheckOri, (bool require_safe))
    IL2CPP_REGISTER_METHOD(0x00DA33A0, bool, IsSafeTestPassed, (app::PlatformBehaviour * behaviour))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinCanPickupCondition * this_ptr))
} // namespace app::classes::SeinCanPickupCondition
