#pragma once
#include <Modloader/app/structs/AudioExtensionDefinition.h>
#include <Modloader/app/structs/AudioExtensionDefinition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioExtensionDefinition {
        inline app::AudioExtensionDefinition__Class** type_info() {
            static app::AudioExtensionDefinition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioExtensionDefinition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioExtensionDefinition__Class* get_class() {
            return il2cpp::get_class<app::AudioExtensionDefinition__Class>(type_info(), "UnityEngine", "AudioExtensionDefinition");
        }
        inline app::AudioExtensionDefinition* create() {
            return il2cpp::create_object<app::AudioExtensionDefinition>(get_class());
        }
    } // namespace AudioExtensionDefinition
} // namespace app::classes::types
