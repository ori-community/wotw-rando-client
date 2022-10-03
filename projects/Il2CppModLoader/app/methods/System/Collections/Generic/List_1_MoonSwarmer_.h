#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_MoonSwarmer_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_MoonSwarmer_ * this_ptr, app::MoonSwarmer* item))
    IL2CPP_REGISTER_METHODINFO(0x0470D6C0, List_1_MoonSwarmer__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonSwarmer*, get_Item, (app::List_1_MoonSwarmer_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0473C2D0, List_1_MoonSwarmer__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_MoonSwarmer_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04707CD0, List_1_MoonSwarmer__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_MoonSwarmer_ * this_ptr, app::MoonSwarmer* item))
    IL2CPP_REGISTER_METHODINFO(0x04754408, List_1_MoonSwarmer__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_MoonSwarmer_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04701D58, List_1_MoonSwarmer___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_MoonSwarmer_
