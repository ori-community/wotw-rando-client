#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/SkeetoEntity.h>
#include <Modloader/app/structs/SkeetoEntity_SkeetoState__Enum.h>
#include <Modloader/app/structs/SkeetoEntity_SkeetoType__Enum.h>
#include <Modloader/app/structs/SkeetoSpawnType__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SkeetoEntity {
    IL2CPP_REGISTER_METHOD(0x00755320, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x007553F0, app::Vector3, get_CharacterPatrolTarget, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00755530, bool, get_IsOnScreen, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00755540, bool, get_IsTurning, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00755570, float, get_CameraInfluenceMinDist, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00755590, float, get_CameraInfluenceMaxDist, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007555B0, app::SkeetoSpawnType__Enum, get_SpawnType, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007555C0, void, set_SpawnType, app::SkeetoEntity* this_ptr, app::SkeetoSpawnType__Enum value)
    IL2CPP_REGISTER_METHOD(0x007555D0, int32_t, get_AttacksInRow, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007555E0, void, set_AttacksInRow, app::SkeetoEntity* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsFlyingEnemy, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007555F0, app::SkeetoEntity_SkeetoType__Enum, get_Type, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00755600, bool, get_IsAttacking, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00755610, void, set_IsAttacking, app::SkeetoEntity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00755620, bool, get_IsSpawning, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007556F0, app::SkeetoEntity_SkeetoState__Enum, get_State, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00755700, bool, get_AutoResetSpotOriBool, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00755710, void, OnAwake, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007558C0, void, OnRestoreCheckpoint, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007559F0, void, UnserializedInitialization, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00755AD0, void, OnEnable, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00755C30, void, OnDestroy, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00755DE0, void, ResetEntity, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00755EE0, void, SetSwellingAmount, app::SkeetoEntity* this_ptr, float amount)
    IL2CPP_REGISTER_METHOD(0x00755EF0, void, MakeBomb, app::SkeetoEntity* this_ptr, bool disable_damage_dealers)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SuccessfulEating, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00755F30, void, OnDied, app::SkeetoEntity* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x00756110, void, Explode, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00756130, bool, IsOriInAttackRange, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00756440, bool, IsPositionInAttackRange, app::SkeetoEntity* this_ptr, app::Vector3 offset_to_target)
    IL2CPP_REGISTER_METHOD(0x007565C0, void, IncrementAttacksInRowCounter, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007565D0, void, ResetAttacksInRowCounter, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007565E0, void, DrawAttackRangeGizmos, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00756880, void, OnDrawGizmosSelected, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00756890, void, ctor, app::SkeetoEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00756980, void, cctor, )
} // namespace app::classes::SkeetoEntity
