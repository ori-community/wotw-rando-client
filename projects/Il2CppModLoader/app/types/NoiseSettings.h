#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NoiseSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NoiseSettings__Class** type_info;
        inline app::NoiseSettings__Class* get_class() {
            return il2cpp::get_class<app::NoiseSettings__Class>(type_info, "", "NoiseSettings");
        }
        inline app::NoiseSettings* create() {
            return il2cpp::create_object<app::NoiseSettings>(get_class());
        }
    } // namespace NoiseSettings
} // namespace app::classes::types
