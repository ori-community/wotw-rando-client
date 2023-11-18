#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterGravity_c.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>

namespace app::classes::CharacterGravity___c {
    IL2CPP_REGISTER_METHOD(0x01300560, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CharacterGravity_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__18_0, (app::CharacterGravity_c * this_ptr, app::GravityPlatformMovementSettings* _p0_))
} // namespace app::classes::CharacterGravity___c
