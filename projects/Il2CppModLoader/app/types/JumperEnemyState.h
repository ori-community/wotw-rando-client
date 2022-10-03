#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumperEnemyState {
        namespace {
            app::JumperEnemyState__Class* type_info_ref = nullptr;
        }
        app::JumperEnemyState__Class** type_info = &type_info_ref;
        inline app::JumperEnemyState__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyState__Class>(type_info, "", "JumperEnemyState");
        }
        inline app::JumperEnemyState* create() {
            return il2cpp::create_object<app::JumperEnemyState>(get_class());
        }
    } // namespace JumperEnemyState
} // namespace app::classes::types
