#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_IDebugMenuItem_ {
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, (app::List_1_IDebugMenuItem_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x0472E8B8, List_1_IDebugMenuItem___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_IDebugMenuItem_ * this_ptr, app::IDebugMenuItem* item))
    IL2CPP_REGISTER_METHODINFO(0x0472D490, List_1_IDebugMenuItem__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_IDebugMenuItem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047638A8, List_1_IDebugMenuItem__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::IDebugMenuItem*, get_Item, (app::List_1_IDebugMenuItem_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04776CC8, List_1_IDebugMenuItem__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_IDebugMenuItem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04764650, List_1_IDebugMenuItem__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (app::List_1_IDebugMenuItem_ * this_ptr, app::Comparison_1_IDebugMenuItem_* comparison))
    IL2CPP_REGISTER_METHODINFO(0x047167C8, List_1_IDebugMenuItem__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_IDebugMenuItem_, GetEnumerator, (app::List_1_IDebugMenuItem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478FF80, List_1_IDebugMenuItem__GetEnumerator__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_IDebugMenuItem_
