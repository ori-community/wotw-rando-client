#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_IEntry_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::IEntry *, get_Item, (app::List_1_IEntry_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04712F68, List_1_IEntry__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_IEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477B5F0, List_1_IEntry__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_IEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04755370, List_1_IEntry__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_IEntry_ * this_ptr, app::IEntry * item))
    IL2CPP_REGISTER_METHODINFO(0x0478C058, List_1_IEntry__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_IEntry_ * this_ptr, app::IEntry * item))
    IL2CPP_REGISTER_METHODINFO(0x04740DD8, List_1_IEntry__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_IEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473D428, List_1_IEntry___ctor__MethodInfo)
}
