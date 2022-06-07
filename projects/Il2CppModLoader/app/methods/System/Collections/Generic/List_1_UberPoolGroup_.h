#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_UberPoolGroup_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_UberPoolGroup_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477C838, List_1_UberPoolGroup___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_UberPoolGroup_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04721448, List_1_UberPoolGroup__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::UberPoolGroup *, get_Item, (app::List_1_UberPoolGroup_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047018A8, List_1_UberPoolGroup__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_UberPoolGroup_ * this_ptr, app::UberPoolGroup * item))
    IL2CPP_REGISTER_METHODINFO(0x04754F30, List_1_UberPoolGroup__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_UberPoolGroup_, GetEnumerator, (app::List_1_UberPoolGroup_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04763680, List_1_UberPoolGroup__GetEnumerator__MethodInfo)
}
