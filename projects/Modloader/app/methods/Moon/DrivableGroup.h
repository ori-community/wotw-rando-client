#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DrivableGroup.h>
#include <Modloader/app/structs/IDrivable.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::DrivableGroup {
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsActive, (app::DrivableGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsActive, (app::DrivableGroup * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x03136590, void, RegisterDrivable, (app::DrivableGroup * this_ptr, app::IDrivable* drivable))
    IL2CPP_REGISTER_METHOD(0x03136670, void, UnregisterDrivable, (app::DrivableGroup * this_ptr, app::IDrivable* drivable))
    IL2CPP_REGISTER_METHOD(0x03136740, bool, Contains, (app::DrivableGroup * this_ptr, app::IDrivable* drivable))
    IL2CPP_REGISTER_METHOD(0x031367E0, app::String*, get_GroupName, (app::DrivableGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_GroupName, (app::DrivableGroup * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x03136930, int32_t, get_GroupSize, (app::DrivableGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031369C0, void, Pause, (app::DrivableGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03136C00, void, Resume, (app::DrivableGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00617EB0, void, Activate, (app::DrivableGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03136E40, void, Clear, (app::DrivableGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03136F40, void, ctor, (app::DrivableGroup * this_ptr))
} // namespace app::classes::Moon::DrivableGroup
