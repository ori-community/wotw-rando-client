#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumperEnemyStunnedState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JumperEnemyStunnedState__Class** type_info;
        inline app::JumperEnemyStunnedState__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyStunnedState__Class>(type_info, "", "JumperEnemyStunnedState");
        }
        inline app::JumperEnemyStunnedState* create() {
            return il2cpp::create_object<app::JumperEnemyStunnedState>(get_class());
        }
    } // namespace JumperEnemyStunnedState
} // namespace app::classes::types
