#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaurEntity.h>
#include <Modloader/app/structs/BaurEntity_State__Enum.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/ICharacter.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>

namespace app::classes::BaurEntity {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CameraTargetActive, (app::BaurEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F97E30, app::String*, get_DialogActorName, (app::BaurEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F97EB0, app::String*, get_InteractionActorName, (app::BaurEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F97F30, bool, get_IsSnoring, (app::BaurEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F97F90, app::BaurEntity_State__Enum, get_CurrentState, (app::BaurEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F97FC0, void, set_CurrentState, (app::BaurEntity * this_ptr, app::BaurEntity_State__Enum value))
    IL2CPP_REGISTER_METHOD(0x00F97FF0, void, PlayLookAnimation, (app::BaurEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F98260, void, OnAwake, (app::BaurEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F98430, void, OnEnable, (app::BaurEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F986D0, void, ResetEntity, (app::BaurEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F986F0, void, OnDisable, (app::BaurEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F987A0, void, OnUnblockedGate, (app::BaurEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F989A0, void, OnUpdate, (app::BaurEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F98EA0, void, TriggerSnoreSound, (app::BaurEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F99050, void, UpdateSnoreSound, (app::BaurEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F991F0, void, Awakened, (app::BaurEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F993F0, void, UpdateCurrentIdle, (app::BaurEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (app::BaurEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F99900, void, Apply, (app::BaurEntity * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x00F99910, app::IUberState__Array*, get_AffectingUberStates, (app::BaurEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F999A0, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::BaurEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F99B60, void, ResolveDamage, (app::BaurEntity * this_ptr, app::DamageResult result))
    IL2CPP_REGISTER_METHOD(0x00F99DA0, bool, CanInteractWithCharacter, (app::BaurEntity * this_ptr, app::ICharacter* character))
    IL2CPP_REGISTER_METHOD(0x00F9A110, void, ctor, (app::BaurEntity * this_ptr))
} // namespace app::classes::BaurEntity
