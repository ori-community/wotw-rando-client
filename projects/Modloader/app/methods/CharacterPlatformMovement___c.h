#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterPlatformMovement_c.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/MoonControllerColliderHit.h>

namespace app::classes::CharacterPlatformMovement___c {
    IL2CPP_REGISTER_METHOD(0x01311AB0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CharacterPlatformMovement_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__227_0, app::CharacterPlatformMovement_c* this_ptr, app::MoonControllerColliderHit _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__227_1, app::CharacterPlatformMovement_c* this_ptr, app::Collision* _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__227_2, app::CharacterPlatformMovement_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__227_3, app::CharacterPlatformMovement_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__227_4, app::CharacterPlatformMovement_c* this_ptr)
} // namespace app::classes::CharacterPlatformMovement___c
