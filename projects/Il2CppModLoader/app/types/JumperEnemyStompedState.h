#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumperEnemyStompedState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JumperEnemyStompedState__Class** type_info;
        inline app::JumperEnemyStompedState__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyStompedState__Class>(type_info, "", "JumperEnemyStompedState");
        }
        inline app::JumperEnemyStompedState* create() {
            return il2cpp::create_object<app::JumperEnemyStompedState>(get_class());
        }
    } // namespace JumperEnemyStompedState
} // namespace app::classes::types
