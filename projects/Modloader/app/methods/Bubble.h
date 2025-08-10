#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bubble.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::Bubble {
    IL2CPP_REGISTER_METHOD(0x00654950, app::SuspendableMask__Enum, get_Mask, app::Bubble* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D51A10, void, set_Mask, app::Bubble* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00603D60, bool, get_IsSuspended, app::Bubble* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D51AC0, void, set_IsSuspended, app::Bubble* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::Collider*, get_Collider, app::Bubble* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCC0, app::Collider__Array*, get_Colliders, app::Bubble* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D51D80, void, Awake, app::Bubble* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D52230, void, OnDestroy, app::Bubble* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D522D0, void, OnRestoreCheckpoint, app::Bubble* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D523C0, void, OnEnable, app::Bubble* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D52AE0, void, OnDisable, app::Bubble* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D53100, void, OnPoolSpawned, app::Bubble* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, app::Bubble* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D53110, void, DestroyOnTimelineStop, app::Bubble* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00597B10, app::UpdateType__Enum, get_UpdateType, app::Bubble* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D53210, void, OnUpdate, app::Bubble* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x00D53AE0, void, OnTriggerEnter, app::Bubble* this_ptr, app::Collider* other)
    IL2CPP_REGISTER_METHOD(0x00D53B40, void, OnCollisionEnter, app::Bubble* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00D542A0, bool, CanKillBubble, app::Bubble* this_ptr, app::GameObject* target)
    IL2CPP_REGISTER_METHOD(0x00D543F0, void, Destroy, app::Bubble* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D544C0, void, OnDamageResultReceived, app::Bubble* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x00D54930, void, OnReceiveWindFromPipe, app::Bubble* this_ptr, app::Vector2 push_force)
    IL2CPP_REGISTER_METHOD(0x00D54970, void, OriLandAbove, app::Bubble* this_ptr, app::GameObject* target)
    IL2CPP_REGISTER_METHOD(0x00B85450, void, PlayBumpTimeline, app::Bubble* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D54A80, void, PopBubble, app::Bubble* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D54B90, void, EnableBubbleScripts, app::Bubble* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D54D60, void, DisableBubbleScripts, app::Bubble* this_ptr, bool ori_bounced)
    IL2CPP_REGISTER_METHOD(0x00D54F00, void, ExecuteSpring, app::Bubble* this_ptr, app::GameObject* target)
    IL2CPP_REGISTER_METHOD(0x00D54FF0, bool, IsCenterPointInsideWater, app::Bubble* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D55250, bool, ShouldKillBubble, app::Bubble* this_ptr, app::Transform* bubble_transform)
    IL2CPP_REGISTER_METHOD(0x00D55340, void, ctor, app::Bubble* this_ptr)
} // namespace app::classes::Bubble
