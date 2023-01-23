#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AudioSpatializerExtensionDefinition__Class.h>
#include <Modloader/app/structs/AudioSpatializerExtensionDefinition.h>
#include <Modloader/app/structs/AudioSpatializerExtensionDefinition__Array.h>

namespace app::classes::types {
    namespace AudioSpatializerExtensionDefinition {
        namespace {
            inline app::AudioSpatializerExtensionDefinition__Class* type_info_ref = nullptr;
        }
        inline app::AudioSpatializerExtensionDefinition__Class** type_info = &type_info_ref;
        inline app::AudioSpatializerExtensionDefinition__Class* get_class() {
            return il2cpp::get_class<app::AudioSpatializerExtensionDefinition__Class>(type_info, "UnityEngine", "AudioSpatializerExtensionDefinition");
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
