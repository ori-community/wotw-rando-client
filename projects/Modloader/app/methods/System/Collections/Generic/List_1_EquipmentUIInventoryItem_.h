#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_EquipmentUIInventoryItem_.h>
#include <Modloader/app/structs/EquipmentUIInventoryItem.h>

namespace app::classes::System::Collections::Generic::List_1_EquipmentUIInventoryItem_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_EquipmentUIInventoryItem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047848F0, List_1_EquipmentUIInventoryItem__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_EquipmentUIInventoryItem_ * this_ptr, app::EquipmentUIInventoryItem* item))
    IL2CPP_REGISTER_METHODINFO(0x0470F560, List_1_EquipmentUIInventoryItem__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_EquipmentUIInventoryItem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04761248, List_1_EquipmentUIInventoryItem__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::EquipmentUIInventoryItem*, get_Item, (app::List_1_EquipmentUIInventoryItem_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0477D8B0, List_1_EquipmentUIInventoryItem__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_EquipmentUIInventoryItem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474B9C8, List_1_EquipmentUIInventoryItem___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_EquipmentUIInventoryItem_
