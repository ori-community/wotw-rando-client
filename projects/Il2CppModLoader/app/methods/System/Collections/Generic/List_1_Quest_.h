#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_Quest_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Quest_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047708A8, List_1_Quest__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Quest*, get_Item, (app::List_1_Quest_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04701610, List_1_Quest__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Quest_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04710160, List_1_Quest___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Quest_ * this_ptr, app::Quest* item))
    IL2CPP_REGISTER_METHODINFO(0x04716C00, List_1_Quest__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_Quest_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04743E70, List_1_Quest__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Quest_, GetEnumerator, (app::List_1_Quest_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474B200, List_1_Quest__GetEnumerator__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Quest_
