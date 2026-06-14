#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/CharacterLeftRightMovement_c.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>

namespace app::classes::CharacterLeftRightMovement___c {
    IL2CPP_REGISTER_METHOD(0x01302F50, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CharacterLeftRightMovement_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__44_0, app::CharacterLeftRightMovement_c* this_ptr, app::CharacterLeftRightMovement* _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__44_1, app::CharacterLeftRightMovement_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__44_2, app::CharacterLeftRightMovement_c* this_ptr, app::HorizontalPlatformMovementSettings* _p0_)
} // namespace app::classes::CharacterLeftRightMovement___c
