#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_GhostFrame_.h>
#include <Modloader/app/structs/GhostFrame.h>

namespace app::classes::System::Collections::Generic::List_1_GhostFrame_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_GhostFrame_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04783DA8, List_1_GhostFrame__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::GhostFrame*, get_Item, (app::List_1_GhostFrame_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047010F8, List_1_GhostFrame__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_GhostFrame_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04717B00, List_1_GhostFrame__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_GhostFrame_ * this_ptr, app::GhostFrame* item))
    IL2CPP_REGISTER_METHODINFO(0x04738698, List_1_GhostFrame__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, (app::List_1_GhostFrame_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x0477F4B8, List_1_GhostFrame___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_GhostFrame_
