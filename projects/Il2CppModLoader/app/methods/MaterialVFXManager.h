#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MaterialVFXManager {
    IL2CPP_REGISTER_METHOD(0x01383BF0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x01383C70, void, Awake, (app::MaterialVFXManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01383D40, void, Instantiate_1, (app::MaterialVFXManager * this_ptr, app::Collider * collider, app::MaterialTypeVFXSettings_EffectSize__Enum surface_impact_size, app::Vector3 position, app::Quaternion rotation, app::EquipmentType__Enum weapon, app::MaterialTypeVFXSettings_EffectSize__Enum weapon_impact_size))
    IL2CPP_REGISTER_METHOD(0x01383EE0, void, Instantiate_2, (app::MaterialVFXManager * this_ptr, app::PhysicMaterial * material, app::MaterialTypeVFXSettings_EffectSize__Enum surface_impact_size, app::Vector3 position, app::Quaternion rotation, app::EquipmentType__Enum weapon, app::MaterialTypeVFXSettings_EffectSize__Enum weapon_impact_size))
    IL2CPP_REGISTER_METHOD(0x01383F70, void, Instantiate_3, (app::MaterialVFXManager * this_ptr, app::SurfaceMaterialType__Enum material_type, app::MaterialTypeVFXSettings_EffectSize__Enum surface_impact_size, app::Vector3 position, app::Quaternion rotation, app::EquipmentType__Enum weapon, app::MaterialTypeVFXSettings_EffectSize__Enum weapon_impact_size))
    IL2CPP_REGISTER_METHOD(0x01384100, void, InstantiateOptional, (app::MaterialVFXManager * this_ptr, app::InstantiationRecycleHelper * surface_f_x_recycler, app::InstantiationRecycleHelper * weapon_fx_recycler, app::SurfaceMaterialType__Enum material_type, app::MaterialTypeVFXSettings_EffectSize__Enum surface_impact_size, app::Vector3 position, app::Quaternion rotation, app::EquipmentType__Enum weapon, app::MaterialTypeVFXSettings_EffectSize__Enum weapon_impact_size, int32_t frames_to_test_against, int32_t allowed_instance_count, float distance_threshold))
    IL2CPP_REGISTER_METHOD(0x01384380, app::GameObject *, InstantiateSurfaceFX, (app::MaterialVFXManager * this_ptr, app::SurfaceMaterialType__Enum material_type, app::MaterialTypeVFXSettings_EffectSize__Enum surface_impact_size, app::Vector3 position, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x013844F0, app::GameObject *, InstantiateWeaponFX, (app::MaterialVFXManager * this_ptr, app::EquipmentType__Enum weapon, app::MaterialTypeVFXSettings_EffectSize__Enum weapon_impact_size, app::Vector3 position, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x01384660, app::SurfaceMaterialType__Enum, GetMaterialType_1, (app::MaterialVFXManager * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x01384780, app::SurfaceMaterialType__Enum, GetMaterialType_2, (app::MaterialVFXManager * this_ptr, app::PhysicMaterial * material))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MaterialVFXManager * this_ptr))
}
