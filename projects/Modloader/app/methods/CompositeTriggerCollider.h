#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CompositeTriggerCollider.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Collider_Boolean_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::CompositeTriggerCollider {
    IL2CPP_REGISTER_METHOD(0x011DF060, void, Start, (app::CompositeTriggerCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011DFF40, void, FixedUpdate, (app::CompositeTriggerCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E0090, app::IEnumerator*, PropagateCollisionsToSiblings, (app::CompositeTriggerCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E01E0, void, PropagateTrigger, (app::CompositeTriggerCollider * this_ptr, app::String* message, app::IEnumerable_1_UnityEngine_Collider_* colliders_to_process, app::Func_2_UnityEngine_Collider_Boolean_* should_propagate))
    IL2CPP_REGISTER_METHOD(0x011E0530, void, OnDestroy, (app::CompositeTriggerCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CompositeTriggerCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E0A40, void, _Start_b__7_0, (app::CompositeTriggerCollider * this_ptr, app::Collider* c))
    IL2CPP_REGISTER_METHOD(0x011E0AF0, void, _Start_b__7_1, (app::CompositeTriggerCollider * this_ptr, app::Collider* c))
    IL2CPP_REGISTER_METHOD(0x011E0BA0, void, _Start_b__7_2, (app::CompositeTriggerCollider * this_ptr, app::Collider* c))
    IL2CPP_REGISTER_METHOD(0x011E0C50, bool, _PropagateCollisionsToSiblings_b__9_0, (app::CompositeTriggerCollider * this_ptr, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x011E0D20, bool, _PropagateCollisionsToSiblings_b__9_1, (app::CompositeTriggerCollider * this_ptr, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x011E0DF0, bool, _PropagateCollisionsToSiblings_b__9_2, (app::CompositeTriggerCollider * this_ptr, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x011E0ED0, bool, _PropagateCollisionsToSiblings_b__9_3, (app::CompositeTriggerCollider * this_ptr, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x011E0F80, void, _OnDestroy_b__11_0, (app::CompositeTriggerCollider * this_ptr, app::Collider* c))
    IL2CPP_REGISTER_METHOD(0x011E1030, void, _OnDestroy_b__11_1, (app::CompositeTriggerCollider * this_ptr, app::Collider* c))
    IL2CPP_REGISTER_METHOD(0x011E10E0, void, _OnDestroy_b__11_2, (app::CompositeTriggerCollider * this_ptr, app::Collider* c))
} // namespace app::classes::CompositeTriggerCollider
