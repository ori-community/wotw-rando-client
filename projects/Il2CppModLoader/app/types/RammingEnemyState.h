#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingEnemyState {
        namespace {
            app::RammingEnemyState__Class* type_info_ref = nullptr;
        }
        app::RammingEnemyState__Class** type_info = &type_info_ref;
        inline app::RammingEnemyState__Class* get_class() {
            return il2cpp::get_class<app::RammingEnemyState__Class>(type_info, "", "RammingEnemyState");
        }
        inline app::RammingEnemyState* create() {
            return il2cpp::create_object<app::RammingEnemyState>(get_class());
        }
    } // namespace RammingEnemyState
} // namespace app::classes::types
