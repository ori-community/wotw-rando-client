#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AudioSourceExtension.h>
#include <Modloader/app/structs/AudioSource.h>
#include <Modloader/app/structs/PropertyName.h>

namespace app::classes::UnityEngine::AudioSourceExtension {
    IL2CPP_REGISTER_METHOD(0x03144650, void, ctor, (app::AudioSourceExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F25880, app::AudioSource*, get_audioSource, (app::AudioSourceExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_audioSource, (app::AudioSourceExtension * this_ptr, app::AudioSource* value))
    IL2CPP_REGISTER_METHOD(0x024BF590, float, ReadExtensionProperty, (app::AudioSourceExtension * this_ptr, app::PropertyName property_name))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteExtensionProperty, (app::AudioSourceExtension * this_ptr, app::PropertyName property_name, float property_value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Play, (app::AudioSourceExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (app::AudioSourceExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ExtensionUpdate, (app::AudioSourceExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03144660, void, OnDestroy, (app::AudioSourceExtension * this_ptr))
} // namespace app::classes::UnityEngine::AudioSourceExtension
