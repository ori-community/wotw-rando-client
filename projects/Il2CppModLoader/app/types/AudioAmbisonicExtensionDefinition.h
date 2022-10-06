#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioAmbisonicExtensionDefinition {
        namespace {
            app::AudioAmbisonicExtensionDefinition__Class* type_info_ref = nullptr;
        }
        app::AudioAmbisonicExtensionDefinition__Class** type_info = &type_info_ref;
        inline app::AudioAmbisonicExtensionDefinition__Class* get_class() {
            return il2cpp::get_class<app::AudioAmbisonicExtensionDefinition__Class>(type_info, "UnityEngine", "AudioAmbisonicExtensionDefinition");
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
