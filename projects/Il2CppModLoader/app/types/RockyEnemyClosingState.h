#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyClosingState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RockyEnemyClosingState__Class** type_info;
        inline app::RockyEnemyClosingState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyClosingState__Class>(type_info, "", "RockyEnemyClosingState");
        }
        inline app::RockyEnemyClosingState* create() {
            return il2cpp::create_object<app::RockyEnemyClosingState>(get_class());
        }
    } // namespace RockyEnemyClosingState
} // namespace app::classes::types
