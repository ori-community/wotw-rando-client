#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DelayedAction.h>
#include <Modloader/app/structs/List_1_DelayedAction_.h>

namespace app::classes::System::Collections::Generic::List_1_DelayedAction_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::DelayedAction*, get_Item, app::List_1_DelayedAction_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_DelayedAction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_DelayedAction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_DelayedAction_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_DelayedAction_
