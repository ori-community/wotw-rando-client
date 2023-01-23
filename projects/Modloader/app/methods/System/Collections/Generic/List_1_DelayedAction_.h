#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DelayedAction.h>
#include <Modloader/app/structs/List_1_DelayedAction_.h>

namespace app::classes::System::Collections::Generic::List_1_DelayedAction_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::DelayedAction*, get_Item, (app::List_1_DelayedAction_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0476CD28, List_1_DelayedAction__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_DelayedAction_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477AB10, List_1_DelayedAction__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_DelayedAction_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04733C70, List_1_DelayedAction__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_DelayedAction_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472EC00, List_1_DelayedAction___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_DelayedAction_
