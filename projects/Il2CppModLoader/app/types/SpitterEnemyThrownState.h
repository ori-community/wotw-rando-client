#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemyThrownState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpitterEnemyThrownState__Class** type_info;
        inline app::SpitterEnemyThrownState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyThrownState__Class>(type_info, "", "SpitterEnemyThrownState");
        }
        inline app::SpitterEnemyThrownState* create() {
            return il2cpp::create_object<app::SpitterEnemyThrownState>(get_class());
        }
    } // namespace SpitterEnemyThrownState
} // namespace app::classes::types
