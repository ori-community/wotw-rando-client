#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/TentacleEntity.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::TentacleEntity {
    IL2CPP_REGISTER_METHOD(0x00CFDBE0, bool, get_IsTentacleFacingTarget, app::TentacleEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CFDD40, bool, get_IsUnderWater, app::TentacleEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CFDD50, void, set_IsUnderWater, app::TentacleEntity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004A3B20, float, get_ShotCooldown, app::TentacleEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CFDE00, app::Vector3, get_CameraTargetPosition, app::TentacleEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CFDF80, void, SetLayer, app::TentacleEntity* this_ptr, int32_t segment_layer, int32_t head_layer)
    IL2CPP_REGISTER_METHOD(0x00CFE150, void, ResetDefaultHeadLayer, app::TentacleEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CFE1E0, void, ResetDefaultLayer, app::TentacleEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CFE200, void, ResetEntity, app::TentacleEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CFE2B0, void, LerpTargetTo, app::TentacleEntity* this_ptr, app::Vector3 pos, float k, float max_speed)
    IL2CPP_REGISTER_METHOD(0x00CFE530, void, LerpTargetToPlayer, app::TentacleEntity* this_ptr, float k, float max_speed)
    IL2CPP_REGISTER_METHOD(0x00CFE810, app::Vector3, SnapTargetToInterestPoint, app::TentacleEntity* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00CFEAF0, void, OnAwake, app::TentacleEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CFEC30, void, EnterSpawningState, app::TentacleEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CFEDD0, app::Vector3, ApplyTargetBounds, app::TentacleEntity* this_ptr, app::Vector3 target)
    IL2CPP_REGISTER_METHOD(0x00CFF340, void, UpdateHitSideParameter, app::TentacleEntity* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00CFF650, void, UpdateDirectionParameter, app::TentacleEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CFF9B0, void, UpdateDistanceParameter, app::TentacleEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CFFB50, void, OnFixedUpdate, app::TentacleEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CFFF00, void, OnDamageReceived, app::TentacleEntity* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x00C0CBA0, bool, get_IsSuspended, app::TentacleEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D00190, void, set_IsSuspended, app::TentacleEntity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00D001E0, void, OnDestroy, app::TentacleEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B63460, void, OnDisable, app::TentacleEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D001F0, void, ctor, app::TentacleEntity* this_ptr)
} // namespace app::classes::TentacleEntity
