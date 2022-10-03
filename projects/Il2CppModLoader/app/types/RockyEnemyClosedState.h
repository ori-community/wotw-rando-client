#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyClosedState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RockyEnemyClosedState__Class** type_info;
        inline app::RockyEnemyClosedState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyClosedState__Class>(type_info, "", "RockyEnemyClosedState");
        }
        inline app::RockyEnemyClosedState* create() {
            return il2cpp::create_object<app::RockyEnemyClosedState>(get_class());
        }
    } // namespace RockyEnemyClosedState
} // namespace app::classes::types
