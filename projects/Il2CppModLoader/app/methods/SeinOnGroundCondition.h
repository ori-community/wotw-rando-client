#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SeinOnGroundCondition {
    IL2CPP_REGISTER_METHOD(0x008AF4D0, bool, Validate, (app::SeinOnGroundCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008AF590, bool, IsValid, (app::SeinOnGroundCondition_Characters__Enum character_to_check, bool require_grounded, bool require_safe))
    IL2CPP_REGISTER_METHOD(0x008AF810, bool, CheckOri, (bool require_grounded, bool require_safe))
    IL2CPP_REGISTER_METHOD(0x008AFB60, bool, CheckKu, (bool require_grounded, bool require_safe))
    IL2CPP_REGISTER_METHOD(0x008AFCA0, bool, IsSafeTestPassed, (app::PlatformBehaviour * behaviour))
    IL2CPP_REGISTER_METHOD(0x008AFD70, void, ctor, (app::SeinOnGroundCondition * this_ptr))
} // namespace app::classes::SeinOnGroundCondition
