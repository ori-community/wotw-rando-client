#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioDeviceOptions {
        namespace {
            app::AudioDeviceOptions__Class* type_info_ref = nullptr;
        }
        app::AudioDeviceOptions__Class** type_info = &type_info_ref;
        inline app::AudioDeviceOptions__Class* get_class() {
            return il2cpp::get_class<app::AudioDeviceOptions__Class>(type_info, "", "AudioDeviceOptions");
        }
        inline app::AudioDeviceOptions* create() {
            return il2cpp::create_object<app::AudioDeviceOptions>(get_class());
        }
    } // namespace AudioDeviceOptions
} // namespace app::classes::types
