#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GenericCollisionTrigger {
    IL2CPP_REGISTER_METHOD(0x00E06170, void, OnCollisionEnter, (app::GenericCollisionTrigger * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00E06310, void, OnTriggerEnter, (app::GenericCollisionTrigger * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00E063F0, void, Process, (app::GenericCollisionTrigger * this_ptr, app::GameObject* game_object, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00E06620, void, OnTriggerActivated, (app::GenericCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E06780, void, OnTriggerEnable, (app::GenericCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E06820, void, OnTriggerDisable, (app::GenericCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::GenericCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCB0, void, set_AllTargets, (app::GenericCollisionTrigger * this_ptr, app::List_1_UnityEngine_GameObject_* value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (app::GenericCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Apply, (app::GenericCollisionTrigger * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x00E068C0, app::IUberState__Array*, get_AffectingUberStates, (app::GenericCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E06A00, void, StopTransitions, (app::GenericCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E06B20, void, ctor, (app::GenericCollisionTrigger * this_ptr))
} // namespace app::classes::GenericCollisionTrigger
