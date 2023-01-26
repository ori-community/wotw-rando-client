#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PiranhaEntity.h>
#include <Modloader/app/structs/CameraTargetData.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::PiranhaEntity {
    IL2CPP_REGISTER_METHOD(0x0115E6D0, bool, get_ShouldFollowOri, (app::PiranhaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0115E780, void, AdjustCameraTargetWeight, (app::PiranhaEntity * this_ptr, float* weight, app::CameraTargetData* data, app::Vector3 primary_target_position))
    IL2CPP_REGISTER_METHOD(0x0115E7E0, bool, get_IsTargetInWater, (app::PiranhaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0115E910, bool, get_IsStunned, (app::PiranhaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0115E930, void, OnCacheSerializedComponents, (app::PiranhaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0115EB30, void, OnFixedUpdate, (app::PiranhaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0115ECE0, void, ResetEntity, (app::PiranhaEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0115ED00, void, ResolveDamage, (app::PiranhaEntity * this_ptr, app::DamageResult* damage_result))
    IL2CPP_REGISTER_METHOD(0x0115ED40, app::Vector3, ModifyKickbackForce, (app::PiranhaEntity * this_ptr, app::Vector3 force, app::Damage* damage, bool apply_death_modification))
    IL2CPP_REGISTER_METHOD(0x0115EE80, void, ctor, (app::PiranhaEntity * this_ptr))
} // namespace app::classes::PiranhaEntity
