#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterestSettings.h>
#include <Modloader/app/structs/List_1_IDebugMenuItem_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::InterestSettings {
    IL2CPP_REGISTER_METHOD(0x01103530, void, GetDebugMenuItems, (app::InterestSettings * this_ptr, app::List_1_IDebugMenuItem_* list, app::String* menu_name))
    IL2CPP_REGISTER_METHOD(0x01104220, void, ctor, (app::InterestSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C87B0, float, _GetDebugMenuItems_b__3_0, (app::InterestSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C87C0, void, _GetDebugMenuItems_b__3_1, (app::InterestSettings * this_ptr, float f))
    IL2CPP_REGISTER_METHOD(0x00B83F30, float, _GetDebugMenuItems_b__3_2, (app::InterestSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B83F40, void, _GetDebugMenuItems_b__3_3, (app::InterestSettings * this_ptr, float f))
    IL2CPP_REGISTER_METHOD(0x00863E90, float, _GetDebugMenuItems_b__3_4, (app::InterestSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863EA0, void, _GetDebugMenuItems_b__3_5, (app::InterestSettings * this_ptr, float f))
    IL2CPP_REGISTER_METHOD(0x00573170, float, _GetDebugMenuItems_b__3_6, (app::InterestSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FDC10, void, _GetDebugMenuItems_b__3_7, (app::InterestSettings * this_ptr, float f))
} // namespace app::classes::Moon::InterestSettings
