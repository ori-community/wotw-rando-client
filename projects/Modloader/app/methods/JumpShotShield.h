#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::JumpShotShield {
    IL2CPP_REGISTER_METHOD(0x00E508D0, void, add_OnCollision, (app::JumpShotShield * this_ptr, app::Action_1_UnityEngine_Collider_* value))
    IL2CPP_REGISTER_METHOD(0x00E509C0, void, remove_OnCollision, (app::JumpShotShield * this_ptr, app::Action_1_UnityEngine_Collider_* value))
    IL2CPP_REGISTER_METHOD(0x00E50AB0, void, OnTriggerEnter, (app::JumpShotShield * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00E50B50, void, ctor, (app::JumpShotShield * this_ptr))
} // namespace app::classes::JumpShotShield
