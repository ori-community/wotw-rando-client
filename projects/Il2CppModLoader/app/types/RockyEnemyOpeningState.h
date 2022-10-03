#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyOpeningState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RockyEnemyOpeningState__Class** type_info;
        inline app::RockyEnemyOpeningState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyOpeningState__Class>(type_info, "", "RockyEnemyOpeningState");
        }
        inline app::RockyEnemyOpeningState* create() {
            return il2cpp::create_object<app::RockyEnemyOpeningState>(get_class());
        }
    } // namespace RockyEnemyOpeningState
} // namespace app::classes::types
