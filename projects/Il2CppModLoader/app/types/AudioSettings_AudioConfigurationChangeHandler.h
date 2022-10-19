#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AudioSettings_AudioConfigurationChangeHandler {
        namespace {
            inline app::AudioSettings_AudioConfigurationChangeHandler__Class* type_info_ref = nullptr;
        }
        inline app::AudioSettings_AudioConfigurationChangeHandler__Class** type_info = &type_info_ref;
        inline app::AudioSettings_AudioConfigurationChangeHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::AudioSettings_AudioConfigurationChangeHandler__Class>(type_info, "UnityEngine", "AudioSettings", "AudioConfigurationChangeHandler");
        }
        inline app::AudioSettings_AudioConfigurationChangeHandler* create() {
            return il2cpp::create_object<app::AudioSettings_AudioConfigurationChangeHandler>(get_class());
        }
    } // namespace AudioSettings_AudioConfigurationChangeHandler
} // namespace app::classes::types
