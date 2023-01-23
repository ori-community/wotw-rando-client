#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_DebugHubItem_.h>
#include <Modloader/app/structs/DebugHubItem.h>

namespace app::classes::System::Collections::Generic::List_1_DebugHubItem_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_DebugHubItem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04767248, List_1_DebugHubItem__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_DebugHubItem_ * this_ptr, app::DebugHubItem* item))
    IL2CPP_REGISTER_METHODINFO(0x047638B0, List_1_DebugHubItem__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::DebugHubItem*, get_Item, (app::List_1_DebugHubItem_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04705FF0, List_1_DebugHubItem__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_DebugHubItem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04755AD0, List_1_DebugHubItem__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_DebugHubItem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476E578, List_1_DebugHubItem___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_DebugHubItem_
