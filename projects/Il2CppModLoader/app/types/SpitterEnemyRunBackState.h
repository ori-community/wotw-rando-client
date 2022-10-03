#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemyRunBackState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpitterEnemyRunBackState__Class** type_info;
        inline app::SpitterEnemyRunBackState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyRunBackState__Class>(type_info, "", "SpitterEnemyRunBackState");
        }
        inline app::SpitterEnemyRunBackState* create() {
            return il2cpp::create_object<app::SpitterEnemyRunBackState>(get_class());
        }
    } // namespace SpitterEnemyRunBackState
} // namespace app::classes::types
