#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Enemy2D {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Enemy2D__Class** type_info;
        inline app::Enemy2D__Class* get_class() {
            return il2cpp::get_class<app::Enemy2D__Class>(type_info, "", "Enemy2D");
        }
        inline app::Enemy2D* create() {
            return il2cpp::create_object<app::Enemy2D>(get_class());
        }
    } // namespace Enemy2D
} // namespace app::classes::types
