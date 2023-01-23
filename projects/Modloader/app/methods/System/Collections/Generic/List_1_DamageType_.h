#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_DamageType_.h>
#include <Modloader/app/structs/DamageType__Enum.h>

namespace app::classes::System::Collections::Generic::List_1_DamageType_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_DamageType_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04709020, List_1_DamageType___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D1F360, app::DamageType__Enum, get_Item, (app::List_1_DamageType_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04706F30, List_1_DamageType__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_DamageType_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476A148, List_1_DamageType__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1CC20, bool, Contains, (app::List_1_DamageType_ * this_ptr, app::DamageType__Enum item))
    IL2CPP_REGISTER_METHODINFO(0x04742158, List_1_DamageType__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1C970, void, Add, (app::List_1_DamageType_ * this_ptr, app::DamageType__Enum item))
    IL2CPP_REGISTER_METHODINFO(0x0470C5A0, List_1_DamageType__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D20C90, void, RemoveAt, (app::List_1_DamageType_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0474CA50, List_1_DamageType__RemoveAt__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_DamageType_
