#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_System_Threading_Timer_ {
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, (app::List_1_System_Threading_Timer_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x0477D398, List_1_System_Threading_Timer___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_Threading_Timer_ * this_ptr, app::Timer * item))
    IL2CPP_REGISTER_METHODINFO(0x04701098, List_1_System_Threading_Timer__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_System_Threading_Timer_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04701E80, List_1_System_Threading_Timer__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Timer *, get_Item, (app::List_1_System_Threading_Timer_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04772A50, List_1_System_Threading_Timer__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_System_Threading_Timer_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04716A38, List_1_System_Threading_Timer__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, (app::List_1_System_Threading_Timer_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04780098, List_1_System_Threading_Timer__get_Capacity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, (app::List_1_System_Threading_Timer_ * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x0474CD50, List_1_System_Threading_Timer__set_Capacity__MethodInfo)
}
