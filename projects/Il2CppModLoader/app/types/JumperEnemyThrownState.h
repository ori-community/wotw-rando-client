#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumperEnemyThrownState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JumperEnemyThrownState__Class** type_info;
        inline app::JumperEnemyThrownState__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyThrownState__Class>(type_info, "", "JumperEnemyThrownState");
        }
        inline app::JumperEnemyThrownState* create() {
            return il2cpp::create_object<app::JumperEnemyThrownState>(get_class());
        }
    } // namespace JumperEnemyThrownState
} // namespace app::classes::types
