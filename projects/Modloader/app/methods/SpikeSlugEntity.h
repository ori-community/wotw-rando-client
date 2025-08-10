#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/EnemyPlatformMovement.h>
#include <Modloader/app/structs/GroundPatrolDirectionMode__Enum.h>
#include <Modloader/app/structs/ShellSlugShell.h>
#include <Modloader/app/structs/SpikeSlugEntity.h>
#include <Modloader/app/structs/SpikeSlugEntity_SpikeSlugShellState__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SpikeSlugEntity {
    IL2CPP_REGISTER_METHOD(0x011C9260, app::GroundPatrolDirectionMode__Enum, get_MovementPattern, app::SpikeSlugEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011C9270, void, set_MovementPattern, app::SpikeSlugEntity* this_ptr, app::GroundPatrolDirectionMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x011C9280, bool, get_ShouldToogleMoveDirection, app::SpikeSlugEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011C9290, bool, get_IsShelled, app::SpikeSlugEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011C92A0, bool, get_ShouldIdleDuringPatrol, app::SpikeSlugEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011C92B0, void, set_ShouldIdleDuringPatrol, app::SpikeSlugEntity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00B91440, int32_t, get_OwnerID, app::SpikeSlugEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011C92C0, bool, WasShelled, app::SpikeSlugEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011C92D0, app::EnemyPlatformMovement*, get_PlatformMovement, app::SpikeSlugEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011C9390, void, EjectShell, app::SpikeSlugEntity* this_ptr, app::Vector3 impact_position, app::Vector3 direction)
    IL2CPP_REGISTER_METHOD(0x011C9820, void, DestroyShell, app::SpikeSlugEntity* this_ptr, app::Vector3 impact_position, app::Vector3 direction)
    IL2CPP_REGISTER_METHOD(0x011C9AE0, void, OnAwake, app::SpikeSlugEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011C9D10, void, SetShellParent, app::SpikeSlugEntity* this_ptr, app::ShellSlugShell* shell, app::Transform* parent)
    IL2CPP_REGISTER_METHOD(0x011CA370, void, ResolveDamage, app::SpikeSlugEntity* this_ptr, app::DamageResult* damage_result)
    IL2CPP_REGISTER_METHOD(0x011CA710, bool, get_ShouldPlayFootsteps, app::SpikeSlugEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011CA890, app::SpikeSlugEntity_SpikeSlugShellState__Enum, get_ShellState, app::SpikeSlugEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011CA8A0, void, set_ShellState, app::SpikeSlugEntity* this_ptr, app::SpikeSlugEntity_SpikeSlugShellState__Enum value)
    IL2CPP_REGISTER_METHOD(0x011CB0F0, void, OnUpdate, app::SpikeSlugEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011CBB00, void, AddSpringVelocity, app::SpikeSlugEntity* this_ptr, float velocity)
    IL2CPP_REGISTER_METHOD(0x011CBB30, void, SetSpringVelocity, app::SpikeSlugEntity* this_ptr, float velocity)
    IL2CPP_REGISTER_METHOD(0x011CBB50, void, ResetEntity, app::SpikeSlugEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011CBCD0, void, ShowShell, app::SpikeSlugEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011CBE10, void, HideShell, app::SpikeSlugEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011CBF50, void, OnDied, app::SpikeSlugEntity* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(
        0x011CC180,
        app::Vector3,
        ModifyKickbackForce,
        app::SpikeSlugEntity* this_ptr,
        app::Vector3 force,
        app::Damage* damage,
        bool apply_death_modification
    )
    IL2CPP_REGISTER_METHOD(0x011CC790, bool, get_IsSuspended, app::SpikeSlugEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011CC7A0, void, set_IsSuspended, app::SpikeSlugEntity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x011CC800, void, OnSuspendedStay, app::SpikeSlugEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011CC850, void, ctor, app::SpikeSlugEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011CCA30, void, _DestroyShell_b__49_0, app::SpikeSlugEntity* this_ptr)
} // namespace app::classes::SpikeSlugEntity
