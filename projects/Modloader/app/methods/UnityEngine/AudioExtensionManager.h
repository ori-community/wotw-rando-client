#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AudioListener.h>
#include <Modloader/app/structs/AudioListenerExtension.h>
#include <Modloader/app/structs/AudioSource.h>
#include <Modloader/app/structs/AudioSourceExtension.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::AudioExtensionManager {
    IL2CPP_REGISTER_METHOD(0x0313EDD0, app::AudioSourceExtension*, AddSpatializerExtension_1, app::AudioSource* source)
    IL2CPP_REGISTER_METHOD(0x0313F140, app::AudioSourceExtension*, AddAmbisonicDecoderExtension, app::AudioSource* source)
    IL2CPP_REGISTER_METHOD(0x0313F440, void, WriteExtensionProperties_1, app::AudioSourceExtension* extension, app::String* extension_name)
    IL2CPP_REGISTER_METHOD(0x0313F740, app::AudioListenerExtension*, AddSpatializerExtension_2, app::AudioListener* listener)
    IL2CPP_REGISTER_METHOD(0x0313FAB0, void, WriteExtensionProperties_2, app::AudioListenerExtension* extension, app::String* extension_name)
    IL2CPP_REGISTER_METHOD(0x0313FDB0, void, AddExtensionToManager, app::AudioSourceExtension* extension)
    IL2CPP_REGISTER_METHOD(0x0313FED0, void, RemoveExtensionFromManager, app::AudioSourceExtension* extension)
    IL2CPP_REGISTER_METHOD(0x031400C0, void, Update, )
    IL2CPP_REGISTER_METHOD(0x03140630, void, GetReadyToPlay, app::AudioSourceExtension* extension)
    IL2CPP_REGISTER_METHOD(0x03140820, void, RegisterBuiltinDefinitions, )
    IL2CPP_REGISTER_METHOD(0x031409D0, app::Object_1*, GetAudioListener, )
    IL2CPP_REGISTER_METHOD(0x03140A20, void, cctor, )
} // namespace app::classes::UnityEngine::AudioExtensionManager
