#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContrastSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ContrastSettings__Class** type_info;
        inline app::ContrastSettings__Class* get_class() {
            return il2cpp::get_class<app::ContrastSettings__Class>(type_info, "", "ContrastSettings");
        }
        inline app::ContrastSettings* create() {
            return il2cpp::create_object<app::ContrastSettings>(get_class());
        }
    } // namespace ContrastSettings
} // namespace app::classes::types
