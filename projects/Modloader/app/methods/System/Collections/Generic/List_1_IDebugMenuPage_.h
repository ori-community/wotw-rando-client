#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_IDebugMenuPage_.h>
#include <Modloader/app/structs/IDebugMenuPage.h>

namespace app::classes::System::Collections::Generic::List_1_IDebugMenuPage_ {
    IL2CPP_REGISTER_METHOD(0x025F0BE0, int32_t, IndexOf, (app::List_1_IDebugMenuPage_ * this_ptr, app::IDebugMenuPage* item))
    IL2CPP_REGISTER_METHODINFO(0x0476FDF8, List_1_IDebugMenuPage__IndexOf__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::IDebugMenuPage*, get_Item, (app::List_1_IDebugMenuPage_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04742718, List_1_IDebugMenuPage__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_IDebugMenuPage_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470E810, List_1_IDebugMenuPage__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_IDebugMenuPage_ * this_ptr, app::IDebugMenuPage* item))
    IL2CPP_REGISTER_METHODINFO(0x04756398, List_1_IDebugMenuPage__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_IDebugMenuPage_ * this_ptr, app::IDebugMenuPage* item))
    IL2CPP_REGISTER_METHODINFO(0x0470C0E0, List_1_IDebugMenuPage__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_IDebugMenuPage_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04777798, List_1_IDebugMenuPage___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_IDebugMenuPage_ * this_ptr, app::IDebugMenuPage* item))
    IL2CPP_REGISTER_METHODINFO(0x04732388, List_1_IDebugMenuPage__Remove__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_IDebugMenuPage_
