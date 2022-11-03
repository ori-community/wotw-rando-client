#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_ICondition_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_ICondition_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478FDA8, List_1_ICondition___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_ICondition_ * this_ptr, app::ICondition* item))
    IL2CPP_REGISTER_METHODINFO(0x04759EB8, List_1_ICondition__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::ICondition*, get_Item, (app::List_1_ICondition_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0474FF50, List_1_ICondition__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_ICondition_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047336F8, List_1_ICondition__get_Count__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_ICondition_
