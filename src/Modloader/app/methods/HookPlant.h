#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/HookPlant.h>
#include <Modloader/app/structs/HookPlant_State__Enum.h>
#include <Modloader/app/structs/SeinSpiritLeashAbility.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/VirtualClipsBuilder.h>

namespace app::classes::HookPlant {
    IL2CPP_REGISTER_METHOD(0x00B5E490, app::SeinSpiritLeashAbility*, get_Leash, app::HookPlant* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A64220, app::Transform*, get_HookTargetTransform, app::HookPlant* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B5E5D0, void, SetAnimationAngle, app::HookPlant* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B5E8C0, void, Start, app::HookPlant* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B5EA80, void, OnDestroy, app::HookPlant* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B5E0F0, void, OnPostRestoreCheckpoint, app::HookPlant* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B5EC30, void, Closed, app::HookPlant* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B5EC40, void, Opened, app::HookPlant* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B5EC50, void, ChangeState, app::HookPlant* this_ptr, app::HookPlant_State__Enum new_state)
    IL2CPP_REGISTER_METHOD(0x00B5F1C0, void, FixedUpdate, app::HookPlant* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B5F4A0, void, PlayCurrentTimeline, app::HookPlant* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B5F570, void, StopCurrentTimeline, app::HookPlant* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B5F640, void, SubscribeToCurrentTimelineStop, app::HookPlant* this_ptr, app::Action* action)
    IL2CPP_REGISTER_METHOD(0x00B5F770, void, OnSpiritLeashed, app::HookPlant* this_ptr, app::Vector3 player_position, app::Vector3 target_position)
    IL2CPP_REGISTER_METHOD(0x00B5F7F0, bool, CanBeSpiritLeashed, app::HookPlant* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B5F800, app::Vector3, GetLeashPos, app::HookPlant* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00757DC0, bool, get_InvalidateParentTimelineCache, app::HookPlant* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B5F820, void, set_InvalidateParentTimelineCache, app::HookPlant* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AddChildren, app::HookPlant* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CreateTimelineParentEntity, app::HookPlant* this_ptr, app::VirtualClipsBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x00B5F830, void, ctor, app::HookPlant* this_ptr)
} // namespace app::classes::HookPlant
