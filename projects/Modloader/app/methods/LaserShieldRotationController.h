#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LaserShieldRotationController.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/LaserShieldDamageReceiver.h>
#include <Modloader/app/structs/LaserShieldRotationController_RotationType__Enum.h>
#include <Modloader/app/structs/LaserShooterMinibossEntity.h>
#include <Modloader/app/structs/List_1_LaserShieldDamageReceiver_.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::LaserShieldRotationController {
    IL2CPP_REGISTER_METHOD(0x00F0E660, int32_t, get_PieceCount, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004994E0, float, get_DefaultRotationSpeedMultiplierTweenSpeed, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FC5D0, float, get_RotationSpeedMultiplierTweenSpeed, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_DefaultRotationSpeedMultiplier, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0E6F0, app::Vector3, get_PieceLocalPositionOffset, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0E710, void, set_PieceLocalPositionOffset, (app::LaserShieldRotationController * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00F0E730, app::Vector3, get_PieceWorldOffset, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0E750, void, set_PieceWorldOffset, (app::LaserShieldRotationController * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_RotateCore, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_RotateCore, (app::LaserShieldRotationController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00849490, float, get_ManualTargetAngle, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0E770, void, set_ManualTargetAngle, (app::LaserShieldRotationController * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FBD20, app::LaserShooterMinibossEntity*, get_Entity, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD30, void, set_Entity, (app::LaserShieldRotationController * this_ptr, app::LaserShooterMinibossEntity* value))
    IL2CPP_REGISTER_METHOD(0x00F0E780, void, ResetState, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0E970, float, get_CurrentRotationSpeed, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0E980, float, get_RotationSpeedMultiplier, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FF7B0, app::LaserShieldRotationController_RotationType__Enum, get_CurrentRotationType, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FBE50, bool, get_AlternateCircleRotations, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FBE60, void, set_AlternateCircleRotations, (app::LaserShieldRotationController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F0EA30, void, Initialize, (app::LaserShieldRotationController * this_ptr, app::LaserShooterMinibossEntity* entity))
    IL2CPP_REGISTER_METHOD(0x00F0ECC0, int32_t, GetDestoyedPiecesCount, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0EDB0, int32_t, GetAlivePiecesCount, (app::LaserShieldRotationController * this_ptr, bool include_projectiles))
    IL2CPP_REGISTER_METHOD(0x00F0EEF0, float, GetDestroyedPercentage, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0EF90, void, SpawnRepairingShieldPieceProjectile, (app::LaserShieldRotationController * this_ptr, int32_t spawn_point_index, int32_t piece_index))
    IL2CPP_REGISTER_METHOD(0x00F0F150, void, SpawnAttackingShieldPieceProjectile, (app::LaserShieldRotationController * this_ptr, app::Vector3 direction, int32_t piece_index))
    IL2CPP_REGISTER_METHOD(0x00F0F540, void, RepairPiece, (app::LaserShieldRotationController * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00F0F7C0, void, ChangeDirection, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0F7E0, void, SetDirection, (app::LaserShieldRotationController * this_ptr, bool right))
    IL2CPP_REGISTER_METHOD(0x00F0F810, void, ResetDirection, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0F820, void, SetPingPong, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0F840, void, SetManual, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0F850, void, SetNormalRotation, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0F860, void, SetSpeedMultiplier, (app::LaserShieldRotationController * this_ptr, float multiplier, bool instant))
    IL2CPP_REGISTER_METHOD(0x00F0F9B0, void, SetSpeedMultiplierInternal, (app::LaserShieldRotationController * this_ptr, float multiplier))
    IL2CPP_REGISTER_METHOD(0x00F0FA70, void, SetTweenSpeed, (app::LaserShieldRotationController * this_ptr, float tween_speed))
    IL2CPP_REGISTER_METHOD(0x00F0FB30, void, SetSpeed, (app::LaserShieldRotationController * this_ptr, float target_speed, bool instant))
    IL2CPP_REGISTER_METHOD(0x00F0FC50, void, SetRotationType, (app::LaserShieldRotationController * this_ptr, app::LaserShieldRotationController_RotationType__Enum rotation_type))
    IL2CPP_REGISTER_METHOD(0x00F0FC90, void, OnEnable, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0FCD0, bool, FullRotationTime, (app::LaserShieldRotationController * this_ptr, float* full_rotation_time))
    IL2CPP_REGISTER_METHOD(0x00F0FDC0, void, OnUpdate, (app::LaserShieldRotationController * this_ptr, float d_time))
    IL2CPP_REGISTER_METHOD(0x00F109D0, app::List_1_LaserShieldDamageReceiver_*, GetAllAlivePieces, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F10C20, void, DestroyAllPieces, (app::LaserShieldRotationController * this_ptr, bool spawn_effects))
    IL2CPP_REGISTER_METHOD(0x00F10DA0, bool, IsPieceDestroyed, (app::LaserShieldRotationController * this_ptr, int32_t piece_index))
    IL2CPP_REGISTER_METHOD(0x00F10F20, app::LaserShieldDamageReceiver*, GetPiece, (app::LaserShieldRotationController * this_ptr, int32_t piece_index))
    IL2CPP_REGISTER_METHOD(0x00F10FD0, void, NotifyPieceProjectileShake, (app::LaserShieldRotationController * this_ptr, float oscilation_strength))
    IL2CPP_REGISTER_METHOD(0x00F11090, void, NotifyShieldAttackShoot, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F110A0, void, NotifyPieceProjectileShakeStart, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F111D0, void, NotifyPieceProjectileReturnStart, (app::LaserShieldRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F11300, void, ProcessDamage, (app::LaserShieldRotationController * this_ptr, app::Damage** damage))
    IL2CPP_REGISTER_METHOD(0x00F11300, void, ResolveDamage, (app::LaserShieldRotationController * this_ptr, app::DamageResult* damage_result))
    IL2CPP_REGISTER_METHOD(0x00F11360, void, ctor, (app::LaserShieldRotationController * this_ptr))
} // namespace app::classes::LaserShieldRotationController
