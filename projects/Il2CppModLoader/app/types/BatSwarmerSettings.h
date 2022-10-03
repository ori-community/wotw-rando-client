#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BatSwarmerSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BatSwarmerSettings__Class** type_info;
        inline app::BatSwarmerSettings__Class* get_class() {
            return il2cpp::get_class<app::BatSwarmerSettings__Class>(type_info, "", "BatSwarmerSettings");
        }
        inline app::BatSwarmerSettings* create() {
            return il2cpp::create_object<app::BatSwarmerSettings>(get_class());
        }
    } // namespace BatSwarmerSettings
} // namespace app::classes::types
