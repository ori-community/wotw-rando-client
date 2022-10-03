#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_TimedActionExecuter_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_TimedActionExecuter_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04771810, List_1_TimedActionExecuter__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_TimedActionExecuter_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476A488, List_1_TimedActionExecuter___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_TimedActionExecuter_ * this_ptr, app::TimedActionExecuter* item))
    IL2CPP_REGISTER_METHODINFO(0x04783B10, List_1_TimedActionExecuter__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (app::List_1_TimedActionExecuter_ * this_ptr, app::Comparison_1_TimedActionExecuter_* comparison))
    IL2CPP_REGISTER_METHODINFO(0x0475ABD0, List_1_TimedActionExecuter__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::TimedActionExecuter*, get_Item, (app::List_1_TimedActionExecuter_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0474F4A8, List_1_TimedActionExecuter__get_Item__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_TimedActionExecuter_
