#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_System_Action_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_System_Action_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04790E78, List_1_System_Action___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_Action_ * this_ptr, app::Action* item))
    IL2CPP_REGISTER_METHODINFO(0x04741E98, List_1_System_Action__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Action*, get_Item, (app::List_1_System_Action_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047238B8, List_1_System_Action__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_System_Action_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474BA80, List_1_System_Action__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_System_Action_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04797930, List_1_System_Action__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_System_Action_ * this_ptr, app::Action* item))
    IL2CPP_REGISTER_METHODINFO(0x04731C78, List_1_System_Action__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_System_Action_ * this_ptr, app::Action* item))
    IL2CPP_REGISTER_METHODINFO(0x04734BE8, List_1_System_Action__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::Action__Array*, ToArray, (app::List_1_System_Action_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477BB00, List_1_System_Action__ToArray__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_Action_, GetEnumerator, (app::List_1_System_Action_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04786358, List_1_System_Action__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_System_Action_ * this_ptr, app::IEnumerable_1_System_Action_* collection))
    IL2CPP_REGISTER_METHODINFO(0x047307D0, List_1_System_Action__AddRange__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_System_Action_
