#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Water3Manager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Water3Manager__Class** type_info;
        inline app::Water3Manager__Class* get_class() {
            return il2cpp::get_class<app::Water3Manager__Class>(type_info, "", "Water3Manager");
        }
        inline app::Water3Manager* create() {
            return il2cpp::create_object<app::Water3Manager>(get_class());
        }
    } // namespace Water3Manager
} // namespace app::classes::types
