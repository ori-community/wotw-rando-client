#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AudioDeviceOptions.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AudioDeviceOptions {
    IL2CPP_REGISTER_METHOD(0x008584A0, void, OnEnable, app::AudioDeviceOptions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008584D0, void, PopulateOutputDeviceOptions, app::AudioDeviceOptions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00858970, void, SetAudioDevice, app::AudioDeviceOptions* this_ptr, app::String* device_name, uint32_t device_id)
    IL2CPP_REGISTER_METHOD(0x00858B20, void, SetCurrentDeviceLabel, app::AudioDeviceOptions* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x00858C40, void, ctor, app::AudioDeviceOptions* this_ptr)
} // namespace app::classes::AudioDeviceOptions
