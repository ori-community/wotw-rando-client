#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_Moon_HitStop_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_HitStop_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04794698, List_1_Moon_HitStop___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::HitStop *, get_Item, (app::List_1_Moon_HitStop_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0477FC90, List_1_Moon_HitStop__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_HitStop_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04765448, List_1_Moon_HitStop__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_HitStop_ * this_ptr, app::HitStop * item))
    IL2CPP_REGISTER_METHODINFO(0x047564B8, List_1_Moon_HitStop__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_Moon_HitStop_ * this_ptr, app::HitStop * item))
    IL2CPP_REGISTER_METHODINFO(0x047204E8, List_1_Moon_HitStop__Remove__MethodInfo)
}
