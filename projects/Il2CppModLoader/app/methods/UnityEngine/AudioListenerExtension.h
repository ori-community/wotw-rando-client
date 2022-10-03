#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::AudioListenerExtension {
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::AudioListenerExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F25880, app::AudioListener*, get_audioListener, (app::AudioListenerExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_audioListener, (app::AudioListenerExtension * this_ptr, app::AudioListener* value))
    IL2CPP_REGISTER_METHOD(0x024BF590, float, ReadExtensionProperty, (app::AudioListenerExtension * this_ptr, app::PropertyName property_name))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteExtensionProperty, (app::AudioListenerExtension * this_ptr, app::PropertyName property_name, float property_value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ExtensionUpdate, (app::AudioListenerExtension * this_ptr))
} // namespace app::classes::UnityEngine::AudioListenerExtension
