#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/Flammable.h>
#include <Modloader/app/structs/Flammable_FlameState__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDesiredUberState.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>

namespace app::classes::Moon::Flammable {
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, app::Flammable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, app::Flammable* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FC830, app::SuspendableMask__Enum, get_Mask, app::Flammable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01224010, void, set_Mask, app::Flammable* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x012240C0, app::Flammable_FlameState__Enum, get_State, app::Flammable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012241B0, void, set_State, app::Flammable* this_ptr, app::Flammable_FlameState__Enum value)
    IL2CPP_REGISTER_METHOD(0x00505C70, void, Awake, app::Flammable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012242A0, void, SetState, app::Flammable* this_ptr, app::Flammable_FlameState__Enum state)
    IL2CPP_REGISTER_METHOD(0x012243E0, void, SetFlameEnabled, app::Flammable* this_ptr, bool enabled)
    IL2CPP_REGISTER_METHOD(0x012244E0, void, PlayTimeline, app::Flammable* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x01224530, void, StopAllTimelines, app::Flammable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01224570, void, OnTriggerEnter, app::Flammable* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x01224750, void, OnFlameEnter, app::Flammable* this_ptr, app::Flammable* flammable)
    IL2CPP_REGISTER_METHOD(0x01224930, void, DestroyFlammableProjectile, app::Flammable* this_ptr, app::Flammable* flammable)
    IL2CPP_REGISTER_METHOD(0x01224A80, void, FixedUpdate, app::Flammable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnValidate, app::Flammable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01224AF0, void, OnEnable, app::Flammable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01224D60, void, OnDisable, app::Flammable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01224530, void, OnCheckpointRestore, app::Flammable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01224F50, void, Apply, app::Flammable* this_ptr, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, app::Flammable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01225030, app::IUberState__Array*, get_AffectingUberStates, app::Flammable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012250C0, app::List_1_UnityEngine_GameObject_*, get_AllTargets, app::Flammable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012252A0, app::IDesiredUberState*, GetRequirementsForTimeline, app::Flammable* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x01225610, void, OnRecieveDamage, app::Flammable* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x01225660, bool, IsRestrictedByTimelineCondition, app::Flammable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01225790, bool, IsAnyTransitionTimelinePlaying, app::Flammable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_InvalidateParentTimelineCache, app::Flammable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E2E0, void, set_InvalidateParentTimelineCache, app::Flammable* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x012258C0, void, ctor, app::Flammable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::Flammable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::Flammable* this_ptr)
} // namespace app::classes::Moon::Flammable
