#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkBasePlatformSettings.h>
#include <Modloader/app/structs/AkCallbackManager_InitializationSettings.h>
#include <Modloader/app/structs/AkCommunicationSettings.h>
#include <Modloader/app/structs/AkInitializationSettings.h>
#include <Modloader/app/structs/AkSpatialAudioInitSettings.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AkBasePlatformSettings {
    IL2CPP_REGISTER_METHOD(0x026CF390, app::AkInitializationSettings*, get_AkInitializationSettings, app::AkBasePlatformSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026CF5D0, app::AkSpatialAudioInitSettings*, get_AkSpatialAudioInitSettings, app::AkBasePlatformSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x026CF810,
        app::AkCallbackManager_InitializationSettings*,
        get_CallbackManagerInitializationSettings,
        app::AkBasePlatformSettings* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x026CF950, app::String*, get_InitialLanguage, app::AkBasePlatformSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_RenderDuringFocusLoss, app::AkBasePlatformSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026CF9D0, app::String*, get_SoundbankPath, app::AkBasePlatformSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026CFA70, app::AkCommunicationSettings*, get_AkCommunicationSettings, app::AkBasePlatformSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseAsyncOpen, app::AkBasePlatformSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, app::AkBasePlatformSettings* this_ptr)
} // namespace app::classes::AkBasePlatformSettings
