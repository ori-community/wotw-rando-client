#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrowHitData.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IByteUberState.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/IDesiredUberState__Array.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/KwolokTongueStatue.h>
#include <Modloader/app/structs/KwolokTongueStatue_KwolowTongueStatueState__Enum.h>
#include <Modloader/app/structs/KwolokTongueStatue_KwolowTongueTriggerSource__Enum.h>
#include <Modloader/app/structs/KwolokTongueStatue_TongueState.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::KwolokTongueStatue {
    IL2CPP_REGISTER_METHOD(0x012FD6B0, app::IByteUberState*, get_ResolvedUberState, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012FD780, bool, get_StateIsSerialized, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012FD870, bool, get_CanCollideWithAnotherTongue, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00413160, bool, get_IsBlocked, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00413170, void, set_IsBlocked, app::KwolokTongueStatue* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012FD920, uint8_t, StateToByte, app::KwolokTongueStatue_KwolowTongueStatueState__Enum state)
    IL2CPP_REGISTER_METHOD(0x012FD930, app::KwolokTongueStatue_KwolowTongueStatueState__Enum, ByteToState, uint8_t val)
    IL2CPP_REGISTER_METHOD(
        0x012FD950,
        app::KwolokTongueStatue_TongueState*,
        GetTongueState,
        app::KwolokTongueStatue* this_ptr,
        app::KwolokTongueStatue_KwolowTongueStatueState__Enum state
    )
    IL2CPP_REGISTER_METHOD(0x012FD970, app::KwolokTongueStatue_TongueState*, get_OpenedState, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012FDAE0, app::KwolokTongueStatue_TongueState*, get_ClosedState, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012FDC50, app::KwolokTongueStatue_TongueState*, get_PartiallyOpenedState, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012FDDD0, void, OnValidate, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012FE000, void, OnEnable, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012FE1D0, void, OnDisable, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012FE3A0, void, OnRestoreCheckpoint, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012FE510, void, Awake, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012FE830, void, OnDestroy, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012FE8F0, void, FixedUpdate, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012FEA60, void, LateUpdate, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012FEBC0, void, HandleBlocking, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012FEC50, void, HandleTonguePlatformActivation, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012FEEE0, bool, IsBlocking, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x012FF0E0,
        bool,
        IsCurrentOrTargetState,
        app::KwolokTongueStatue* this_ptr,
        app::KwolokTongueStatue_KwolowTongueStatueState__Enum state
    )
    IL2CPP_REGISTER_METHOD(0x012FF100, void, ToggleSwitch, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012FF120, void, TurnOn, app::KwolokTongueStatue* this_ptr, app::KwolokTongueStatue_KwolowTongueTriggerSource__Enum source)
    IL2CPP_REGISTER_METHOD(0x012FF260, void, TurnOnPartially, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012FF280, void, TurnOff, app::KwolokTongueStatue* this_ptr, app::KwolokTongueStatue_KwolowTongueTriggerSource__Enum source)
    IL2CPP_REGISTER_METHOD(0x012FF360, void, SetDesiredState, app::KwolokTongueStatue* this_ptr, app::KwolokTongueStatue_KwolowTongueStatueState__Enum state)
    IL2CPP_REGISTER_METHOD(0x012FF560, void, InterruptAllStates, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByBow, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHomingMissiled, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BB6AB0, bool, get_IsSuspended, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BB6AC0, void, set_IsSuspended, app::KwolokTongueStatue* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00413180, app::SuspendableMask__Enum, get_Mask, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012FF5F0, void, set_Mask, app::KwolokTongueStatue* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_BowPriority, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_BowEnableAutoTarget, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldArrowExplode, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012FF6B0, app::Vector3, get_BowAutoTargetPosition, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldArrowBeReflected, app::KwolokTongueStatue* this_ptr, app::ArrowHitData hit_data)
    IL2CPP_REGISTER_METHOD(0x012FF890, bool, get_IsOn, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x012FF8B0,
        app::IDesiredUberState__Array*,
        GetRequirementsForTimeline,
        app::KwolokTongueStatue* this_ptr,
        app::MoonTimeline* timeline
    )
    IL2CPP_REGISTER_METHOD(0x012FFCD0, void, OnRecieveDamage, app::KwolokTongueStatue* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01300080, void, Apply, app::KwolokTongueStatue* this_ptr, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x01300140, app::IUberState__Array*, get_AffectingUberStates, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::List_1_UnityEngine_GameObject_*, get_AllTargets, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013001D0, app::GameObject*, GetDynamicGraphicTarget, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B0220, app::IDamageReciever__Array*, get_AffectedReceivers, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013001F0, void, ctor, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::KwolokTongueStatue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::IMoonTypeResolver*, GetResolverForType, app::KwolokTongueStatue* this_ptr)
} // namespace app::classes::KwolokTongueStatue
