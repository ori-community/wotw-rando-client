#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TentacleHead {
    IL2CPP_REGISTER_METHOD(0x00D00300, void, add_OnTriggerEnterEvent, (app::TentacleHead * this_ptr, app::Action_1_UnityEngine_Collider_* value))
    IL2CPP_REGISTER_METHOD(0x00D003F0, void, remove_OnTriggerEnterEvent, (app::TentacleHead * this_ptr, app::Action_1_UnityEngine_Collider_* value))
    IL2CPP_REGISTER_METHOD(0x00D004E0, void, OnTriggerEnter, (app::TentacleHead * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00D00580, void, ctor, (app::TentacleHead * this_ptr))
} // namespace app::classes::TentacleHead
