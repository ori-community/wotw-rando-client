#pragma once
#include <Modloader/app/structs/AudioDeviceOptions.h>
#include <Modloader/app/structs/AudioDeviceOptions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioDeviceOptions {
        inline app::AudioDeviceOptions__Class** type_info() {
            static app::AudioDeviceOptions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioDeviceOptions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioDeviceOptions__Class* get_class() {
            return il2cpp::get_class<app::AudioDeviceOptions__Class>(type_info(), "", "AudioDeviceOptions");
        }
        inline app::AudioDeviceOptions* create() {
            return il2cpp::create_object<app::AudioDeviceOptions>(get_class());
        }
    } // namespace AudioDeviceOptions
} // namespace app::classes::types
