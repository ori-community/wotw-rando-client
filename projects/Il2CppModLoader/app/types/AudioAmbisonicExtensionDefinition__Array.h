#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AudioAmbisonicExtensionDefinition__Array {
        namespace {
            inline app::AudioAmbisonicExtensionDefinition__Array__Class* type_info_ref = nullptr;
        }
        inline app::AudioAmbisonicExtensionDefinition__Array__Class** type_info = &type_info_ref;
        inline app::AudioAmbisonicExtensionDefinition__Array__Class* get_class() {
            return il2cpp::get_class<app::AudioAmbisonicExtensionDefinition__Array__Class>(type_info, "UnityEngine", "AudioAmbisonicExtensionDefinition[]");
        }
        inline app::AudioAmbisonicExtensionDefinition__Array* create() {
            return il2cpp::create_object<app::AudioAmbisonicExtensionDefinition__Array>(get_class());
        }
    } // namespace AudioAmbisonicExtensionDefinition__Array
} // namespace app::classes::types
