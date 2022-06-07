#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CleverMenuItemLayout {
    IL2CPP_REGISTER_METHOD(0x012B3E70, void, OnEnable, (app::CleverMenuItemLayout * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012B4070, void, OnDisable, (app::CleverMenuItemLayout * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012B4270, void, Sort, (app::CleverMenuItemLayout * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474D3F8, CleverMenuItemLayout_Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012B48A0, void, ctor, (app::CleverMenuItemLayout * this_ptr))
}
