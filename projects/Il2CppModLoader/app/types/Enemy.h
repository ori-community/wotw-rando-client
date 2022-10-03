#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Enemy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Enemy__Class** type_info;
        inline app::Enemy__Class* get_class() {
            return il2cpp::get_class<app::Enemy__Class>(type_info, "", "Enemy");
        }
        inline app::Enemy* create() {
            return il2cpp::create_object<app::Enemy>(get_class());
        }
    } // namespace Enemy
} // namespace app::classes::types
