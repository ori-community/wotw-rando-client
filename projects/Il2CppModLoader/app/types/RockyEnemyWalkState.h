#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyWalkState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RockyEnemyWalkState__Class** type_info;
        inline app::RockyEnemyWalkState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyWalkState__Class>(type_info, "", "RockyEnemyWalkState");
        }
        inline app::RockyEnemyWalkState* create() {
            return il2cpp::create_object<app::RockyEnemyWalkState>(get_class());
        }
    } // namespace RockyEnemyWalkState
} // namespace app::classes::types
