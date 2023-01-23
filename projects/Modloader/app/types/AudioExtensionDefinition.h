#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AudioExtensionDefinition__Class.h>
#include <Modloader/app/structs/AudioExtensionDefinition.h>

namespace app::classes::types {
    namespace AudioExtensionDefinition {
        namespace {
            inline app::AudioExtensionDefinition__Class* type_info_ref = nullptr;
        }
        inline app::AudioExtensionDefinition__Class** type_info = &type_info_ref;
        inline app::AudioExtensionDefinition__Class* get_class() {
            return il2cpp::get_class<app::AudioExtensionDefinition__Class>(type_info, "UnityEngine", "AudioExtensionDefinition");
        }
        inline app::AudioExtensionDefinition* create() {
            return il2cpp::create_object<app::AudioExtensionDefinition>(get_class());
        }
    } // namespace AudioExtensionDefinition
} // namespace app::classes::types
