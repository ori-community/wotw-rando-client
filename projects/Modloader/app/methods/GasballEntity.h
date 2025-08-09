#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/GasballEntity.h>
#include <Modloader/app/structs/GasballEntity_InflateState__Enum.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::GasballEntity {
    IL2CPP_REGISTER_METHOD(0x0041EBA0, app::GasballEntity_InflateState__Enum, GetNextInflateState, app::GasballEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0041ECC0, void, ChangeInflateState, app::GasballEntity* this_ptr, app::GasballEntity_InflateState__Enum state)
    IL2CPP_REGISTER_METHOD(0x0041EDC0, bool, get_IsChasingOri, app::GasballEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0041EDD0, void, set_IsChasingOri, app::GasballEntity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0041EDE0, bool, get_OriWasInsideZone, app::GasballEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0041EDF0, void, set_OriWasInsideZone, app::GasballEntity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsFlyingEnemy, app::GasballEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AutoResetSpotOriBool, app::GasballEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanOptimizeBehaviourTreeEvaluation, app::GasballEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0041EE00, void, OnEnable, app::GasballEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0041EFB0, void, OnDisable, app::GasballEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0041F160, void, ResetEntity, app::GasballEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0041F200, void, OnUpdate, app::GasballEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0041F560, void, OnRestoreCheckpoint, app::GasballEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0041F690, void, Explode, app::GasballEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0041F6C0, void, ResolveDamage, app::GasballEntity* this_ptr, app::DamageResult* damage_result)
    IL2CPP_REGISTER_METHOD(0x0041F750, void, BlockInflation, app::GasballEntity* this_ptr, bool set_to_blocked)
    IL2CPP_REGISTER_METHOD(0x0041F760, void, OnReceiveWindFromPipe, app::GasballEntity* this_ptr, app::Vector2 push_force)
    IL2CPP_REGISTER_METHOD(0x0041F890, void, ctor, app::GasballEntity* this_ptr)
} // namespace app::classes::GasballEntity
