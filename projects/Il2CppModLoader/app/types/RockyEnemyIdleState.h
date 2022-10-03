#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyIdleState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RockyEnemyIdleState__Class** type_info;
        inline app::RockyEnemyIdleState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyIdleState__Class>(type_info, "", "RockyEnemyIdleState");
        }
        inline app::RockyEnemyIdleState* create() {
            return il2cpp::create_object<app::RockyEnemyIdleState>(get_class());
        }
    } // namespace RockyEnemyIdleState
} // namespace app::classes::types
