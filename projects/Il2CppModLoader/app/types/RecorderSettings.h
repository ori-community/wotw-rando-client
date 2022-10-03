#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecorderSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RecorderSettings__Class** type_info;
        inline app::RecorderSettings__Class* get_class() {
            return il2cpp::get_class<app::RecorderSettings__Class>(type_info, "Moon.ContinuousIntegration", "RecorderSettings");
        }
        inline app::RecorderSettings* create() {
            return il2cpp::create_object<app::RecorderSettings>(get_class());
        }
    } // namespace RecorderSettings
} // namespace app::classes::types
