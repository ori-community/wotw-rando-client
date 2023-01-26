#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TelemetryInfo.h>

namespace app::classes::Microsoft::Xbox::Services::Xal::TelemetryInfo {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_ApplicationId, (app::TelemetryInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ApplicationId, (app::TelemetryInfo * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_ApplicationVersion, (app::TelemetryInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_ApplicationVersion, (app::TelemetryInfo * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_OsName, (app::TelemetryInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_OsName, (app::TelemetryInfo * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_OsVersion, (app::TelemetryInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_OsVersion, (app::TelemetryInfo * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_OsLocale, (app::TelemetryInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_OsLocale, (app::TelemetryInfo * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_DeviceClass, (app::TelemetryInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_DeviceClass, (app::TelemetryInfo * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_DeviceId, (app::TelemetryInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_DeviceId, (app::TelemetryInfo * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TelemetryInfo * this_ptr))
} // namespace app::classes::Microsoft::Xbox::Services::Xal::TelemetryInfo
