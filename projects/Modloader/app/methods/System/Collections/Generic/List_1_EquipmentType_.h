#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EquipmentType__Enum.h>
#include <Modloader/app/structs/List_1_EquipmentType_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_EquipmentType_.h>

namespace app::classes::System::Collections::Generic::List_1_EquipmentType_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_EquipmentType_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1CC20, bool, Contains, app::List_1_EquipmentType_* this_ptr, app::EquipmentType__Enum item)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_EquipmentType_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D201B0, app::List_1_T_Enumerator_EquipmentType_, GetEnumerator, app::List_1_EquipmentType_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1C970, void, Add, app::List_1_EquipmentType_* this_ptr, app::EquipmentType__Enum item)
    IL2CPP_REGISTER_METHOD(0x02D1F360, app::EquipmentType__Enum, get_Item, app::List_1_EquipmentType_* this_ptr, int32_t index)
} // namespace app::classes::System::Collections::Generic::List_1_EquipmentType_
