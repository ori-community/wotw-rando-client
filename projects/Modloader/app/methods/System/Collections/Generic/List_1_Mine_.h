#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_Mine_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Mine_ * this_ptr, app::Mine* item))
    IL2CPP_REGISTER_METHODINFO(0x04736578, List_1_Mine__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_Mine_ * this_ptr, app::Mine* item))
    IL2CPP_REGISTER_METHODINFO(0x047671A8, List_1_Mine__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Mine*, get_Item, (app::List_1_Mine_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0477EA20, List_1_Mine__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Mine_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04751ED0, List_1_Mine__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Mine_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047324B0, List_1_Mine___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Mine_
