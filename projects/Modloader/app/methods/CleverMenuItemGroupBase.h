#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CleverMenuItemGroupBase {
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, (app::CleverMenuItemGroupBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, (app::CleverMenuItemGroupBase * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FC830, app::SuspendableMask__Enum, get_Mask, (app::CleverMenuItemGroupBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012B35D0, void, set_Mask, (app::CleverMenuItemGroupBase * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x012B3680, void, Awake, (app::CleverMenuItemGroupBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012B3720, void, OnDestroy, (app::CleverMenuItemGroupBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012B37C0, void, ctor, (app::CleverMenuItemGroupBase * this_ptr))
} // namespace app::classes::CleverMenuItemGroupBase
