#pragma once
#include <Modloader/app/structs/AudioAmbisonicExtensionDefinition.h>
#include <Modloader/app/structs/AudioAmbisonicExtensionDefinition__Array.h>
#include <Modloader/app/structs/AudioAmbisonicExtensionDefinition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioAmbisonicExtensionDefinition {
        inline app::AudioAmbisonicExtensionDefinition__Class** type_info() {
            static app::AudioAmbisonicExtensionDefinition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioAmbisonicExtensionDefinition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioAmbisonicExtensionDefinition__Class* get_class() {
            return il2cpp::get_class<app::AudioAmbisonicExtensionDefinition__Class>(type_info(), "UnityEngine", "AudioAmbisonicExtensionDefinition");
        }
        inline app::AudioAmbisonicExtensionDefinition* create() {
            return il2cpp::create_object<app::AudioAmbisonicExtensionDefinition>(get_class());
        }
        inline app::AudioAmbisonicExtensionDefinition__Array* create_array(int size) {
            return il2cpp::array_new<app::AudioAmbisonicExtensionDefinition__Array>(get_class(), size);
        }
        inline app::AudioAmbisonicExtensionDefinition__Array* create_array(const std::vector<app::AudioAmbisonicExtensionDefinition*>& items) {
            return il2cpp::array_new<app::AudioAmbisonicExtensionDefinition__Array>(get_class(), items);
        }
    } // namespace AudioAmbisonicExtensionDefinition
} // namespace app::classes::types
