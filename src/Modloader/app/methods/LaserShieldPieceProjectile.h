#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LaserShieldPieceProjectile.h>
#include <Modloader/app/structs/LaserShieldPieceProjectile_Mode__Enum.h>
#include <Modloader/app/structs/LaserShieldRotationController.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::LaserShieldPieceProjectile {
    IL2CPP_REGISTER_METHOD(0x00F0ABC0, int32_t, get_Count, )
    IL2CPP_REGISTER_METHOD(0x00F0AC70, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x00F0AD50, float, get_CurrentZRotation, app::LaserShieldPieceProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanGoThroughPortals, app::LaserShieldPieceProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F0AE40, void, Awake, app::LaserShieldPieceProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F0AF60, void, OnEnable, app::LaserShieldPieceProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F0B030, void, OnRecieveDamage, app::LaserShieldPieceProjectile* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00F0B600, void, FixedUpdate, app::LaserShieldPieceProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F0BCF0, void, UpdateVelocity, app::LaserShieldPieceProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F0BFC0, void, UpdateAttackMode, app::LaserShieldPieceProjectile* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x00F0C130, void, UpdateRepairMode, app::LaserShieldPieceProjectile* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x00F0C9E0, void, OnDisable, app::LaserShieldPieceProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00F0CAB0,
        void,
        SetRepairMode,
        app::LaserShieldPieceProjectile* this_ptr,
        app::LaserShieldRotationController* shield_controller,
        app::Transform* target,
        int32_t ring_index,
        int32_t piece_model_index,
        int32_t connected_piece_index,
        app::Vector3 initial_direction
    )
    IL2CPP_REGISTER_METHOD(
        0x00F0CFD0,
        void,
        SetAttackMode,
        app::LaserShieldPieceProjectile* this_ptr,
        app::LaserShieldRotationController* shield_controller,
        app::Vector3 direction,
        int32_t ring_index,
        int32_t piece_model_index,
        int32_t connected_piece_index
    )
    IL2CPP_REGISTER_METHOD(0x00C75390, void, OnGoThroughPortal, app::LaserShieldPieceProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00F0D080,
        void,
        OnDamageDealt,
        app::LaserShieldPieceProjectile* this_ptr,
        app::DamageDealer* damage_dealer,
        app::DamageResult damage_result
    )
    IL2CPP_REGISTER_METHOD(0x00F0D0F0, void, CallExplode, app::LaserShieldPieceProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F0D110, void, SetRotation, app::LaserShieldPieceProjectile* this_ptr, float z_rotation)
    IL2CPP_REGISTER_METHOD(0x00F0D1C0, void, ShowAll, app::LaserShieldPieceProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F0D2C0, void, HideAll, app::LaserShieldPieceProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F0D3C0, void, Show, app::LaserShieldPieceProjectile* this_ptr, int32_t ring_index, int32_t piece_index)
    IL2CPP_REGISTER_METHOD(0x00F0D500, void, SetMode, app::LaserShieldPieceProjectile* this_ptr, app::LaserShieldPieceProjectile_Mode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x00F0D5D0, void, OnCollisionEnter, app::LaserShieldPieceProjectile* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00F0D750, void, OnCollisionStay, app::LaserShieldPieceProjectile* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00F0D8C0, bool, DidHitTowardsMovement, app::LaserShieldPieceProjectile* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00F0DAA0, void, OnStuckStateEnter, app::LaserShieldPieceProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F0DC50, void, OnPoolDespawned, app::LaserShieldPieceProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F0DCC0, void, ClearOscilation, app::LaserShieldPieceProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F0DDD0, void, ApplyStuckOscilation, app::LaserShieldPieceProjectile* this_ptr, float strength)
    IL2CPP_REGISTER_METHOD(0x00F09DC0, void, SpawnEffect, app::LaserShieldPieceProjectile* this_ptr, app::GameObject* prefab)
    IL2CPP_REGISTER_METHOD(0x00F0E0C0, void, ctor, app::LaserShieldPieceProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F0E510, void, cctor, )
} // namespace app::classes::LaserShieldPieceProjectile
