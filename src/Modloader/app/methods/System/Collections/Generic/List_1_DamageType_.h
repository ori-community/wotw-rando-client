#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/List_1_DamageType_.h>

namespace app::classes::System::Collections::Generic::List_1_DamageType_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_DamageType_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D1F360, app::DamageType__Enum, get_Item, app::List_1_DamageType_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_DamageType_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1CC20, bool, Contains, app::List_1_DamageType_* this_ptr, app::DamageType__Enum item)
    IL2CPP_REGISTER_METHOD(0x02F1C970, void, Add, app::List_1_DamageType_* this_ptr, app::DamageType__Enum item)
    IL2CPP_REGISTER_METHOD(0x02D20C90, void, RemoveAt, app::List_1_DamageType_* this_ptr, int32_t index)
} // namespace app::classes::System::Collections::Generic::List_1_DamageType_
