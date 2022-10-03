#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumperEnemyFallState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JumperEnemyFallState__Class** type_info;
        inline app::JumperEnemyFallState__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyFallState__Class>(type_info, "", "JumperEnemyFallState");
        }
        inline app::JumperEnemyFallState* create() {
            return il2cpp::create_object<app::JumperEnemyFallState>(get_class());
        }
    } // namespace JumperEnemyFallState
} // namespace app::classes::types
