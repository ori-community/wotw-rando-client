#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Water3 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Water3__Class** type_info;
        inline app::Water3__Class* get_class() {
            return il2cpp::get_class<app::Water3__Class>(type_info, "", "Water3");
        }
        inline app::Water3* create() {
            return il2cpp::create_object<app::Water3>(get_class());
        }
    } // namespace Water3
} // namespace app::classes::types
