#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_EquipmentType_EquipmentRadialSelection_ItemCache_.h>
#include <Modloader/app/structs/EquipmentRadialSelection_ItemCache.h>
#include <Modloader/app/structs/EquipmentType__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_EquipmentType_EquipmentRadialSelection_ItemCache_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_EquipmentType_EquipmentRadialSelection_ItemCache_ * this_ptr, app::EquipmentType__Enum key))
    IL2CPP_REGISTER_METHOD(0x02C35530, app::EquipmentRadialSelection_ItemCache*, get_Item, (app::Dictionary_2_EquipmentType_EquipmentRadialSelection_ItemCache_ * this_ptr, app::EquipmentType__Enum key))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_EquipmentType_EquipmentRadialSelection_ItemCache_ * this_ptr, app::EquipmentType__Enum key, app::EquipmentRadialSelection_ItemCache* value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_EquipmentType_EquipmentRadialSelection_ItemCache_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_EquipmentType_EquipmentRadialSelection_ItemCache_
