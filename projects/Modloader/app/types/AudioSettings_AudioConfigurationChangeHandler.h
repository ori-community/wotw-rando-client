#pragma once
#include <Modloader/app/structs/AudioSettings_AudioConfigurationChangeHandler.h>
#include <Modloader/app/structs/AudioSettings_AudioConfigurationChangeHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioSettings_AudioConfigurationChangeHandler {
        inline app::AudioSettings_AudioConfigurationChangeHandler__Class** type_info() {
            static app::AudioSettings_AudioConfigurationChangeHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioSettings_AudioConfigurationChangeHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioSettings_AudioConfigurationChangeHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::AudioSettings_AudioConfigurationChangeHandler__Class>(type_info(), "UnityEngine", "AudioSettings", "AudioConfigurationChangeHandler");
        }
        inline app::AudioSettings_AudioConfigurationChangeHandler* create() {
            return il2cpp::create_object<app::AudioSettings_AudioConfigurationChangeHandler>(get_class());
        }
    } // namespace AudioSettings_AudioConfigurationChangeHandler
} // namespace app::classes::types
