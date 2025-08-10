#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/EquipmentType__Enum.h>
#include <Modloader/app/structs/Equipment_Category__Enum.h>

namespace app::classes::Equipment {
    IL2CPP_REGISTER_METHOD(0x00CAAF90, app::Equipment_Category__Enum, EquipmentTypeToCategory, app::EquipmentType__Enum type)
    IL2CPP_REGISTER_METHOD(0x00CAAFD0, app::AbilityType__Enum, EquipmentTypeToAbilityType, app::EquipmentType__Enum type)
    IL2CPP_REGISTER_METHOD(0x00CAB2F0, app::EquipmentType__Enum, AbilityTypeToEquipmentType, app::AbilityType__Enum type)
    IL2CPP_REGISTER_METHOD(0x00CAB7C0, bool, CanBeSharded_1, app::Equipment_Category__Enum category)
    IL2CPP_REGISTER_METHOD(0x00CAB7D0, bool, CanBeSharded_2, app::EquipmentType__Enum type)
} // namespace app::classes::Equipment
