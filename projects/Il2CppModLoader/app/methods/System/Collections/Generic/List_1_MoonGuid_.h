#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_MoonGuid_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_MoonGuid_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04733A00, List_1_MoonGuid__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_MoonGuid_ * this_ptr, app::MoonGuid * item))
    IL2CPP_REGISTER_METHODINFO(0x047691F8, List_1_MoonGuid__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_MoonGuid_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04726AB8, List_1_MoonGuid__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_1, (app::List_1_MoonGuid_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04712700, List_1_MoonGuid___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_2, (app::List_1_MoonGuid_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04743BE0, List_1_MoonGuid___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::MoonGuid__Array *, ToArray, (app::List_1_MoonGuid_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470D5B8, List_1_MoonGuid__ToArray__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_MoonGuid_, GetEnumerator, (app::List_1_MoonGuid_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047233A8, List_1_MoonGuid__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonGuid *, get_Item, (app::List_1_MoonGuid_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0470DF30, List_1_MoonGuid__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (app::List_1_MoonGuid_ * this_ptr, app::Comparison_1_MoonGuid_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x04724348, List_1_MoonGuid__Sort__MethodInfo)
}
