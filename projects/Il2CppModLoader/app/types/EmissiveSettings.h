#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EmissiveSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EmissiveSettings__Class** type_info;
        inline app::EmissiveSettings__Class* get_class() {
            return il2cpp::get_class<app::EmissiveSettings__Class>(type_info, "", "EmissiveSettings");
        }
        inline app::EmissiveSettings* create() {
            return il2cpp::create_object<app::EmissiveSettings>(get_class());
        }
    } // namespace EmissiveSettings
} // namespace app::classes::types
