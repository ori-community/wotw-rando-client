#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemyStompedState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpitterEnemyStompedState__Class** type_info;
        inline app::SpitterEnemyStompedState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyStompedState__Class>(type_info, "", "SpitterEnemyStompedState");
        }
        inline app::SpitterEnemyStompedState* create() {
            return il2cpp::create_object<app::SpitterEnemyStompedState>(get_class());
        }
    } // namespace SpitterEnemyStompedState
} // namespace app::classes::types
