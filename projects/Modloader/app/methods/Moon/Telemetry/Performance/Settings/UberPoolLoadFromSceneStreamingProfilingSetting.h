#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/UberPoolLoadFromSceneStreamingProfilingSetting.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::UberPoolLoadFromSceneStreamingProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E40920, app::ProfilingSettings_SettingType__Enum, get_SettingType, app::UberPoolLoadFromSceneStreamingProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E40930, bool, GetState, app::UberPoolLoadFromSceneStreamingProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E409C0, void, SetState, app::UberPoolLoadFromSceneStreamingProfilingSetting* this_ptr, bool state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UberPoolLoadFromSceneStreamingProfilingSetting* this_ptr)
} // namespace app::classes::Moon::Telemetry::Performance::Settings::UberPoolLoadFromSceneStreamingProfilingSetting
