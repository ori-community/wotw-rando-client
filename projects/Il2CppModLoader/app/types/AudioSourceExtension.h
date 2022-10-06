#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioSourceExtension {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AudioSourceExtension__Class** type_info;
        inline app::AudioSourceExtension__Class* get_class() {
            return il2cpp::get_class<app::AudioSourceExtension__Class>(type_info, "UnityEngine", "AudioSourceExtension");
        }
        inline app::AudioSourceExtension* create() {
            return il2cpp::create_object<app::AudioSourceExtension>(get_class());
        }
        inline app::AudioSourceExtension__Array* create_array(int size) {
            return il2cpp::array_new<app::AudioSourceExtension__Array>(get_class(), size);
        }
        inline app::AudioSourceExtension__Array* create_array(const std::vector<app::AudioSourceExtension*>& items) {
            return il2cpp::array_new<app::AudioSourceExtension__Array>(get_class(), items);
        }
    } // namespace AudioSourceExtension
} // namespace app::classes::types
