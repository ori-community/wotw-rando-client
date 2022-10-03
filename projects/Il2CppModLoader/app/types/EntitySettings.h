#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntitySettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntitySettings__Class** type_info;
        inline app::EntitySettings__Class* get_class() {
            return il2cpp::get_class<app::EntitySettings__Class>(type_info, "Moon", "EntitySettings");
        }
        inline app::EntitySettings* create() {
            return il2cpp::create_object<app::EntitySettings>(get_class());
        }
    } // namespace EntitySettings
} // namespace app::classes::types
