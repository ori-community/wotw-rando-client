#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_LimitedLifetime_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_LimitedLifetime_ * this_ptr, app::LimitedLifetime* item))
    IL2CPP_REGISTER_METHODINFO(0x04770740, List_1_LimitedLifetime__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_LimitedLifetime_ * this_ptr, app::LimitedLifetime* item))
    IL2CPP_REGISTER_METHODINFO(0x04776908, List_1_LimitedLifetime__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::LimitedLifetime*, get_Item, (app::List_1_LimitedLifetime_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0477A3C0, List_1_LimitedLifetime__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_LimitedLifetime_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047300C8, List_1_LimitedLifetime__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_LimitedLifetime_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476C070, List_1_LimitedLifetime__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_LimitedLifetime_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04711850, List_1_LimitedLifetime___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_LimitedLifetime_
