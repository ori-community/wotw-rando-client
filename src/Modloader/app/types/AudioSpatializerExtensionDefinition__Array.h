#pragma once
#include <Modloader/app/structs/AudioSpatializerExtensionDefinition__Array.h>
#include <Modloader/app/structs/AudioSpatializerExtensionDefinition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioSpatializerExtensionDefinition__Array {
        inline app::AudioSpatializerExtensionDefinition__Array__Class** type_info() {
            static app::AudioSpatializerExtensionDefinition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioSpatializerExtensionDefinition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioSpatializerExtensionDefinition__Array__Class* get_class() {
            return il2cpp::get_class<app::AudioSpatializerExtensionDefinition__Array__Class>(type_info(), "UnityEngine", "AudioSpatializerExtensionDefinition[]");
        }
        inline app::AudioSpatializerExtensionDefinition__Array* create() {
            return il2cpp::create_object<app::AudioSpatializerExtensionDefinition__Array>(get_class());
        }
    } // namespace AudioSpatializerExtensionDefinition__Array
} // namespace app::classes::types
