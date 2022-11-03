#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_Test_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Test*, get_Item, (app::List_1_Test_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0470B960, List_1_Test__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Test_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471D2F8, List_1_Test__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Test_ * this_ptr, app::Test* item))
    IL2CPP_REGISTER_METHODINFO(0x04700F78, List_1_Test__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Test_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473E9F0, List_1_Test___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Test_, GetEnumerator, (app::List_1_Test_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04711078, List_1_Test__GetEnumerator__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Test_
