#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::WeaponVFXSet {
    IL2CPP_REGISTER_METHOD(0x005709F0, void, ctor, (app::WeaponVFXSet * this_ptr, app::EquipmentType__Enum weapon))
    IL2CPP_REGISTER_METHOD(0x00570E50, void, Initialize, (app::WeaponVFXSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00570F90, app::GameObject*, FindPrefab, (app::WeaponVFXSet * this_ptr, app::MaterialTypeVFXSettings_EffectSize__Enum size))
    IL2CPP_REGISTER_METHOD(0x00571130, app::GameObject*, FindBloodPrefab, (app::WeaponVFXSet * this_ptr, app::MaterialTypeVFXSettings_EffectSize__Enum size, app::DamageRecieverType__Enum type))
} // namespace app::classes::WeaponVFXSet
