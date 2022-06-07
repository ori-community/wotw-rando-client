#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_Damage_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Damage *, get_Item, (app::List_1_Damage_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04714F78, List_1_Damage__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Damage_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04727970, List_1_Damage__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Damage_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04734850, List_1_Damage__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Damage_ * this_ptr, app::Damage * item))
    IL2CPP_REGISTER_METHODINFO(0x04773B10, List_1_Damage__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, (app::List_1_Damage_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x0470B148, List_1_Damage___ctor__MethodInfo)
}
