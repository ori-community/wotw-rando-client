#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_EquipmentType_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_EquipmentType_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04777FE0, List_1_EquipmentType___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1CC20, bool, Contains, (app::List_1_EquipmentType_ * this_ptr, app::EquipmentType__Enum item))
    IL2CPP_REGISTER_METHODINFO(0x0474A8F8, List_1_EquipmentType__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_EquipmentType_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04771478, List_1_EquipmentType__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D201B0, app::List_1_T_Enumerator_EquipmentType_, GetEnumerator, (app::List_1_EquipmentType_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047839D0, List_1_EquipmentType__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1C970, void, Add, (app::List_1_EquipmentType_ * this_ptr, app::EquipmentType__Enum item))
    IL2CPP_REGISTER_METHODINFO(0x04706FF0, List_1_EquipmentType__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D1F360, app::EquipmentType__Enum, get_Item, (app::List_1_EquipmentType_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0476EFD8, List_1_EquipmentType__get_Item__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_EquipmentType_
