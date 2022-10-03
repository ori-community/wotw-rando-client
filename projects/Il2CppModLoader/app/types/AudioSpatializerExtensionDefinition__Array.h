#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioSpatializerExtensionDefinition__Array {
        namespace {
            app::AudioSpatializerExtensionDefinition__Array__Class* type_info_ref = nullptr;
        }
        app::AudioSpatializerExtensionDefinition__Array__Class** type_info = &type_info_ref;
        inline app::AudioSpatializerExtensionDefinition__Array__Class* get_class() {
            return il2cpp::get_class<app::AudioSpatializerExtensionDefinition__Array__Class>(type_info, "UnityEngine", "AudioSpatializerExtensionDefinition[]");
        }
        inline app::AudioSpatializerExtensionDefinition__Array* create() {
            return il2cpp::create_object<app::AudioSpatializerExtensionDefinition__Array>(get_class());
        }
    } // namespace AudioSpatializerExtensionDefinition__Array
} // namespace app::classes::types
