#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AudioDeviceOptions__Class.h>
#include <Modloader/app/structs/AudioDeviceOptions.h>

namespace app::classes::types {
    namespace AudioDeviceOptions {
        namespace {
            inline app::AudioDeviceOptions__Class* type_info_ref = nullptr;
        }
        inline app::AudioDeviceOptions__Class** type_info = &type_info_ref;
        inline app::AudioDeviceOptions__Class* get_class() {
            return il2cpp::get_class<app::AudioDeviceOptions__Class>(type_info, "", "AudioDeviceOptions");
        }
        inline app::AudioDeviceOptions* create() {
            return il2cpp::create_object<app::AudioDeviceOptions>(get_class());
        }
    } // namespace AudioDeviceOptions
} // namespace app::classes::types
