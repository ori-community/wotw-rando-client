#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/IEnumerable_1_AbilityType_.h>
#include <Modloader/app/structs/List_1_AbilityType_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_AbilityType_.h>

namespace app::classes::System::Collections::Generic::List_1_AbilityType_ {
    IL2CPP_REGISTER_METHOD(0x02F51B80, app::List_1_T_Enumerator_AbilityType_, GetEnumerator, app::List_1_AbilityType_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, app::List_1_AbilityType_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_AbilityType_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F51080, void, Add, app::List_1_AbilityType_* this_ptr, app::AbilityType__Enum item)
    IL2CPP_REGISTER_METHOD(0x02F51330, bool, Contains, app::List_1_AbilityType_* this_ptr, app::AbilityType__Enum item)
    IL2CPP_REGISTER_METHOD(0x02F53730, void, ctor_2, app::List_1_AbilityType_* this_ptr, app::IEnumerable_1_AbilityType_* collection)
    IL2CPP_REGISTER_METHOD(0x02F50D40, app::AbilityType__Enum, get_Item, app::List_1_AbilityType_* this_ptr, int32_t index)
} // namespace app::classes::System::Collections::Generic::List_1_AbilityType_
