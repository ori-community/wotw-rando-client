#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_List_1_IDebugMenuItem_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeDebugMenuPage.h>

namespace app::classes::TimeDebugMenuPage {
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ColumnOffset, app::TimeDebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_Name, app::TimeDebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010ED980, void, Awake, app::TimeDebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010EDA20, void, GetItems, app::TimeDebugMenuPage* this_ptr, app::List_1_List_1_IDebugMenuItem_* items)
    IL2CPP_REGISTER_METHOD(0x010EF220, bool, HighFPSPhysicsGetter, app::TimeDebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010EF240, void, HighFPSPhysicsSetter, app::TimeDebugMenuPage* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x010EF2F0, bool, LowFPSPhysicsGetter, app::TimeDebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010EF310, void, LowFPSPhysicsSetter, app::TimeDebugMenuPage* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x010EF460, bool, LimitPhysicsIterationGetter, app::TimeDebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010EF570, void, LimitPhysicsIterationSetter, app::TimeDebugMenuPage* this_ptr, bool obj)
    IL2CPP_REGISTER_METHOD(0x010EF5E0, void, ctor, app::TimeDebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F43700, bool, _GetItems_b__9_0, app::TimeDebugMenuPage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010EF670, void, _GetItems_b__9_1, app::TimeDebugMenuPage* this_ptr, bool val)
} // namespace app::classes::TimeDebugMenuPage
