#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AudioSettings_AudioConfigurationChangeHandler__Class.h>
#include <Modloader/app/structs/AudioSettings_AudioConfigurationChangeHandler.h>

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
