#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkAudioAPI__Enum.h>
#include <Modloader/app/structs/AkPanningRule__Enum.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings {
    IL2CPP_REGISTER_METHOD(0x027078B0, app::String*, get_FilePath, )
    IL2CPP_REGISTER_METHOD(0x02707970, void, SaveApiOverride, app::AkAudioAPI__Enum type)
    IL2CPP_REGISTER_METHOD(
        0x02707AF0,
        void,
        SaveDeviceOutputOverride,
        app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x02707C70, app::AkAudioAPI__Enum, LoadApiOverride, )
    IL2CPP_REGISTER_METHOD(0x02707D80, app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings*, LoadOutputSettings, )
    IL2CPP_REGISTER_METHOD(0x02707F60, void, SetPanningRule, app::AkPanningRule__Enum rule)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings* this_ptr)
} // namespace app::classes::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings
