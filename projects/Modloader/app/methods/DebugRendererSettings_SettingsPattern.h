#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DebugRendererSettings_SettingsPattern.h>

namespace app::classes::DebugRendererSettings_SettingsPattern {
    IL2CPP_REGISTER_METHOD(0x00B7DC10, void, Init, app::DebugRendererSettings_SettingsPattern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B7DFF0, void, ctor, app::DebugRendererSettings_SettingsPattern* this_ptr)
} // namespace app::classes::DebugRendererSettings_SettingsPattern
