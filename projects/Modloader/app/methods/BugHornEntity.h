#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BugHornEntity.h>
#include <Modloader/app/structs/BugHornEntity_BugHornType__Enum.h>
#include <Modloader/app/structs/BugHornEntity_HornSettings.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_DynamicInstantiationDescriptor_.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::BugHornEntity {
    IL2CPP_REGISTER_METHOD(0x00805AA0, int32_t, get_GroundMask, )
    IL2CPP_REGISTER_METHOD(
        0x00805AB0,
        void,
        EffectsPrefabInstantiation,
        app::BugHornEntity* this_ptr,
        app::List_1_DynamicInstantiationDescriptor_* instantiations
    )
    IL2CPP_REGISTER_METHOD(0x00805CF0, bool, get_IsFluttering, app::BugHornEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00805D00, bool, get_WasFLutteringInterrupted, app::BugHornEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00805D10, bool, get_CanRam, app::BugHornEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00805EC0, bool, get_CanFlutter, app::BugHornEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00805ED0, void, set_CanFlutter, app::BugHornEntity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00805EE0, bool, get_CanHaveShield, app::BugHornEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00805F90, bool, get_IsProtectedByShield, app::BugHornEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00805FA0, bool, get_HasShield, app::BugHornEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00805FB0, void, SetVariationType, app::BugHornEntity* this_ptr, app::BugHornEntity_BugHornType__Enum variation_type)
    IL2CPP_REGISTER_METHOD(0x00806030, void, ResolveDamage, app::BugHornEntity* this_ptr, app::DamageResult* damage_result)
    IL2CPP_REGISTER_METHOD(0x008061F0, void, ResetEntity, app::BugHornEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00806430, void, EnableGroundLocomotion, app::BugHornEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00806440, void, EnableAirLocomotion, app::BugHornEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00806450, app::Locomotion*, GetActiveLocomotion, app::BugHornEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00806440, void, OnFlutteringTakeOffEnded, app::BugHornEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00806430, void, OnFlutteringLandEnded, app::BugHornEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00806430, void, OnFlutteringSlamReachedGround, app::BugHornEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnFlutteringSlamEnded, app::BugHornEntity* this_ptr, float duration)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DisableHorn, app::BugHornEntity* this_ptr, app::BugHornEntity_HornSettings settings)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EnableHorn, app::BugHornEntity* this_ptr, app::BugHornEntity_HornSettings setting)
    IL2CPP_REGISTER_METHOD(0x00806480, void, OnFlutteringInterrupted, app::BugHornEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00806490, void, OnShotDownFallStarted, app::BugHornEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008064B0, void, SpawnSlamChargeEffect_1, app::BugHornEntity* this_ptr, float damage, app::DamageWeight__Enum weight)
    IL2CPP_REGISTER_METHOD(
        0x00807610,
        app::GameObject*,
        SpawnSlamChargeEffect_2,
        app::BugHornEntity* this_ptr,
        app::GameObject* prefab,
        app::Vector3 position,
        app::Quaternion rotation,
        float damage,
        app::DamageWeight__Enum weight,
        app::Transform* force_direction_position
    )
    IL2CPP_REGISTER_METHOD(0x00807800, void, SpawnSlamChargeEffectDistortion, app::BugHornEntity* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x008079B0, void, ctor, app::BugHornEntity* this_ptr)
} // namespace app::classes::BugHornEntity
