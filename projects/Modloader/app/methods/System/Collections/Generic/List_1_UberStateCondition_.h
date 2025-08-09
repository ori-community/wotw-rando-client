#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_T_Enumerator_UberStateCondition_.h>
#include <Modloader/app/structs/List_1_UberStateCondition_.h>
#include <Modloader/app/structs/UberStateCondition.h>

namespace app::classes::System::Collections::Generic::List_1_UberStateCondition_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_UberStateCondition_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::UberStateCondition*, get_Item, app::List_1_UberStateCondition_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025EFC80, void, set_Item, app::List_1_UberStateCondition_* this_ptr, int32_t index, app::UberStateCondition* value)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_UberStateCondition_, GetEnumerator, app::List_1_UberStateCondition_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_UberStateCondition_
