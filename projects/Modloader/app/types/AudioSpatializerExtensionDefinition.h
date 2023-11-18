#pragma once
#include <Modloader/app/structs/AudioSpatializerExtensionDefinition.h>
#include <Modloader/app/structs/AudioSpatializerExtensionDefinition__Array.h>
#include <Modloader/app/structs/AudioSpatializerExtensionDefinition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioSpatializerExtensionDefinition {
        inline app::AudioSpatializerExtensionDefinition__Class** type_info() {
            static app::AudioSpatializerExtensionDefinition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioSpatializerExtensionDefinition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioSpatializerExtensionDefinition__Class* get_class() {
            return il2cpp::get_class<app::AudioSpatializerExtensionDefinition__Class>(type_info(), "UnityEngine", "AudioSpatializerExtensionDefinition");
        }
        inline app::AudioSpatializerExtensionDefinition* create() {
            return il2cpp::create_object<app::AudioSpatializerExtensionDefinition>(get_class());
        }
        inline app::AudioSpatializerExtensionDefinition__Array* create_array(int size) {
            return il2cpp::array_new<app::AudioSpatializerExtensionDefinition__Array>(get_class(), size);
        }
        inline app::AudioSpatializerExtensionDefinition__Array* create_array(const std::vector<app::AudioSpatializerExtensionDefinition*>& items) {
            return il2cpp::array_new<app::AudioSpatializerExtensionDefinition__Array>(get_class(), items);
        }
    } // namespace AudioSpatializerExtensionDefinition
} // namespace app::classes::types
