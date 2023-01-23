#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_Condition_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Condition_.h>
#include <Modloader/app/structs/Condition_1.h>

namespace app::classes::System::Collections::Generic::List_1_Condition_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Condition_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04795C50, List_1_Condition__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Condition_, GetEnumerator, (app::List_1_Condition_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04776380, List_1_Condition__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Condition_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04786C80, List_1_Condition___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Condition_ * this_ptr, app::Condition_1* item))
    IL2CPP_REGISTER_METHODINFO(0x047322E8, List_1_Condition__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Condition_
