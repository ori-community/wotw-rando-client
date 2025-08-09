#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/ChargeShotCollider.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::ChargeShotCollider {
    IL2CPP_REGISTER_METHOD(0x01319C80, app::GameObject*, get_Reflectable, app::ChargeShotCollider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01319DA0, void, add_OnTriggerEnterEvent, app::ChargeShotCollider* this_ptr, app::Action_1_UnityEngine_Collider_* value)
    IL2CPP_REGISTER_METHOD(0x01319E90, void, remove_OnTriggerEnterEvent, app::ChargeShotCollider* this_ptr, app::Action_1_UnityEngine_Collider_* value)
    IL2CPP_REGISTER_METHOD(0x01319F80, void, add_OnTriggerStayEvent, app::ChargeShotCollider* this_ptr, app::Action_1_UnityEngine_Collider_* value)
    IL2CPP_REGISTER_METHOD(0x0131A070, void, remove_OnTriggerStayEvent, app::ChargeShotCollider* this_ptr, app::Action_1_UnityEngine_Collider_* value)
    IL2CPP_REGISTER_METHOD(0x0131A160, void, OnTriggerEnter, app::ChargeShotCollider* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x0131A200, void, OnTriggerStay, app::ChargeShotCollider* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x0131A2A0, void, ctor, app::ChargeShotCollider* this_ptr)
} // namespace app::classes::ChargeShotCollider
