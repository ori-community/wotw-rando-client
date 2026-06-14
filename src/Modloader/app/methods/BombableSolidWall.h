#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BombableSolidWall.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/IDesiredUberState.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::BombableSolidWall {
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, ShouldCreateCheckpointOnDestruction, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D37770, void, OnEnable, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D37960, void, OnDisable, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D37B50, void, OnRestoreCheckpoint, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D37C50, void, OnRecieveDamage, app::BombableSolidWall* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHomingMissiled, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D37E50, app::Vector2, get_BabyWormAutoTargetPosition, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_BabyWormAutoTargetPriority, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_TargetActive, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D37FB0, void, Apply, app::BombableSolidWall* this_ptr, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CBC5E0, app::IUberState__Array*, get_AffectingUberStates, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D380E0, app::List_1_UnityEngine_GameObject_*, get_AllTargets, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D38200, app::IDesiredUberState*, GetRequirementsForTimeline, app::BombableSolidWall* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x00D38420, void, Awake, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::IDamageReciever__Array*, get_AffectedReceivers, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D38610, void, ctor, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::BombableSolidWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::BombableSolidWall* this_ptr)
} // namespace app::classes::BombableSolidWall
