#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AkCommonPlatformSettings {
    IL2CPP_REGISTER_METHOD(0x026DA370, app::AkInitializationSettings*, get_AkInitializationSettings, (app::AkCommonPlatformSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026DAA50, app::AkSpatialAudioInitSettings*, get_AkSpatialAudioInitSettings, (app::AkCommonPlatformSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026DAAE0, app::AkCallbackManager_InitializationSettings*, get_CallbackManagerInitializationSettings, (app::AkCommonPlatformSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026DAC60, app::String*, get_InitialLanguage, (app::AkCommonPlatformSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026DAC90, bool, get_RenderDuringFocusLoss, (app::AkCommonPlatformSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026DACC0, app::String*, get_SoundbankPath, (app::AkCommonPlatformSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026DACF0, bool, get_UseAsyncOpen, (app::AkCommonPlatformSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026DAD20, app::AkCommunicationSettings*, get_AkCommunicationSettings, (app::AkCommonPlatformSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::AkCommonPlatformSettings * this_ptr))
} // namespace app::classes::AkCommonPlatformSettings
