#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/ShowSlicedRenderEditorProfilingSetting.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::ShowSlicedRenderEditorProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3FB10, app::ProfilingSettings_SettingType__Enum, get_SettingType, app::ShowSlicedRenderEditorProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3FB20, bool, GetState, app::ShowSlicedRenderEditorProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3FBB0, void, SetState, app::ShowSlicedRenderEditorProfilingSetting* this_ptr, bool state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ShowSlicedRenderEditorProfilingSetting* this_ptr)
} // namespace app::classes::Moon::Telemetry::Performance::Settings::ShowSlicedRenderEditorProfilingSetting
