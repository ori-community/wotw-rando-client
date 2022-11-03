#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::AbilityBasedSetting {
    IL2CPP_REGISTER_METHOD(0x013321E0, void, GetDebugMenuItems, (app::AbilityBasedSetting * this_ptr, app::List_1_IDebugMenuItem_* list, app::String* menu_name))
    IL2CPP_REGISTER_METHOD(0x013325C0, void, ctor, (app::AbilityBasedSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00418FC0, float, _GetDebugMenuItems_b__1_0, (app::AbilityBasedSetting * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04777460, AbilityBasedSetting__GetDebugMenuItems_b__1_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00A64050, void, _GetDebugMenuItems_b__1_1, (app::AbilityBasedSetting * this_ptr, float f))
    IL2CPP_REGISTER_METHODINFO(0x0476CFD0, AbilityBasedSetting__GetDebugMenuItems_b__1_1__MethodInfo)
} // namespace app::classes::Moon::AbilityBasedSetting
