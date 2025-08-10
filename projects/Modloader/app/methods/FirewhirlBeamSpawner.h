#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/FirewhirlBeamSpawner.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/IDamageReciever.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::FirewhirlBeamSpawner {
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsSuspended, app::FirewhirlBeamSpawner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsSuspended, app::FirewhirlBeamSpawner* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00998570, app::SuspendableMask__Enum, get_Mask, app::FirewhirlBeamSpawner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012626F0, void, set_Mask, app::FirewhirlBeamSpawner* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, GetPrewarmAmount, app::FirewhirlBeamSpawner* this_ptr, app::GameObject* entry)
    IL2CPP_REGISTER_METHOD(0x012627A0, void, Awake, app::FirewhirlBeamSpawner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01262B90, void, Start, app::FirewhirlBeamSpawner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01262DA0, void, OnDisable, app::FirewhirlBeamSpawner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01262DB0, void, OnDestroy, app::FirewhirlBeamSpawner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01263110, void, OnPostRestoreCheckpoint, app::FirewhirlBeamSpawner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01263120, void, FixedUpdate, app::FirewhirlBeamSpawner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01263210, void, UpdateCastSound, app::FirewhirlBeamSpawner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01263390, void, PlayCastSound, app::FirewhirlBeamSpawner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01263480, void, StopCastSound, app::FirewhirlBeamSpawner* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01263570,
        void,
        Spawn,
        app::FirewhirlBeamSpawner* this_ptr,
        app::Vector3 position,
        app::Vector3 direction,
        bool in_air__n_o_t_u_s_e_d
    )
    IL2CPP_REGISTER_METHOD(0x012636E0, void, UpdateBeamDamageDealing, app::FirewhirlBeamSpawner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01263B40, void, ClearBeams, app::FirewhirlBeamSpawner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01263D40, void, UpdateSpawningBeams, app::FirewhirlBeamSpawner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012644F0, void, DealDamage, app::FirewhirlBeamSpawner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01264840, app::Damage*, GetDamage, app::FirewhirlBeamSpawner* this_ptr, app::GameObject* target_object)
    IL2CPP_REGISTER_METHOD(
        0x01264BD0,
        void,
        DealDamageToObject_1,
        app::FirewhirlBeamSpawner* this_ptr,
        app::IDamageReciever* receiver,
        app::GameObject* target_object
    )
    IL2CPP_REGISTER_METHOD(0x01264DA0, void, DealDamageToObject_2, app::FirewhirlBeamSpawner* this_ptr, app::IAttackable* attackable)
    IL2CPP_REGISTER_METHOD(0x01265080, bool, PointInsideListOfRect, app::FirewhirlBeamSpawner* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x012651B0, void, OnDamageTrigger, app::FirewhirlBeamSpawner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012651F0, void, SpawnAreaDamage, app::FirewhirlBeamSpawner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01265840, void, UpdateLightTranform, app::FirewhirlBeamSpawner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012661A0, void, OnDrawGizmos, app::FirewhirlBeamSpawner* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01266250, void, ctor, app::FirewhirlBeamSpawner* this_ptr)
} // namespace app::classes::FirewhirlBeamSpawner
