#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_ServerObjectComponent_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_ServerObjectComponent_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478E888, List_1_ServerObjectComponent__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::ServerObjectComponent *, get_Item, (app::List_1_ServerObjectComponent_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047239A8, List_1_ServerObjectComponent__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_ServerObjectComponent_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477E920, List_1_ServerObjectComponent___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_ServerObjectComponent_ * this_ptr, app::ServerObjectComponent * item))
    IL2CPP_REGISTER_METHODINFO(0x04700FC0, List_1_ServerObjectComponent__Add__MethodInfo)
}
