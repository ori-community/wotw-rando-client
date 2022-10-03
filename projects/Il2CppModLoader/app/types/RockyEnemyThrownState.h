#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyThrownState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RockyEnemyThrownState__Class** type_info;
        inline app::RockyEnemyThrownState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyThrownState__Class>(type_info, "", "RockyEnemyThrownState");
        }
        inline app::RockyEnemyThrownState* create() {
            return il2cpp::create_object<app::RockyEnemyThrownState>(get_class());
        }
    } // namespace RockyEnemyThrownState
} // namespace app::classes::types
