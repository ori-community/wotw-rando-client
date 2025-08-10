#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MaskErasingFixAllSlicesProfilingSetting.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::MaskErasingFixAllSlicesProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3DDF0, app::ProfilingSettings_SettingType__Enum, get_SettingType, app::MaskErasingFixAllSlicesProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3DE00, bool, GetState, app::MaskErasingFixAllSlicesProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3DED0, void, SetState, app::MaskErasingFixAllSlicesProfilingSetting* this_ptr, bool state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MaskErasingFixAllSlicesProfilingSetting* this_ptr)
} // namespace app::classes::Moon::Telemetry::Performance::Settings::MaskErasingFixAllSlicesProfilingSetting
