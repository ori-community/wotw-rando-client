#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_EquipmentType_WeaponVFXSet_.h>
#include <Modloader/app/structs/EquipmentType__Enum.h>
#include <Modloader/app/structs/WeaponVFXSet.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_EquipmentType_WeaponVFXSet_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_EquipmentType_WeaponVFXSet_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_EquipmentType_WeaponVFXSet_ * this_ptr, app::EquipmentType__Enum key, app::WeaponVFXSet* value))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_EquipmentType_WeaponVFXSet_ * this_ptr, app::EquipmentType__Enum key, app::WeaponVFXSet** value))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_EquipmentType_WeaponVFXSet_
