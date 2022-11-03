#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::AudioSettings {
    IL2CPP_REGISTER_METHOD(0x031412E0, app::String*, GetSpatializerPluginName, ())
    IL2CPP_REGISTER_METHOD(0x03141330, void, InvokeOnAudioConfigurationChanged, (bool device_was_changed))
    IL2CPP_REGISTER_METHOD(0x031413D0, void, InvokeOnAudioManagerUpdate, ())
    IL2CPP_REGISTER_METHOD(0x03141460, void, InvokeOnAudioSourcePlay, (app::AudioSource * source))
    IL2CPP_REGISTER_METHOD(0x03141710, app::String*, GetAmbisonicDecoderPluginName, ())
} // namespace app::classes::UnityEngine::AudioSettings
