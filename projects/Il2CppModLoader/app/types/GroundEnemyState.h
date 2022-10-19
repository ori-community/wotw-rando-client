#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroundEnemyState {
        namespace {
            inline app::GroundEnemyState__Class* type_info_ref = nullptr;
        }
        inline app::GroundEnemyState__Class** type_info = &type_info_ref;
        inline app::GroundEnemyState__Class* get_class() {
            return il2cpp::get_class<app::GroundEnemyState__Class>(type_info, "", "GroundEnemyState");
        }
        inline app::GroundEnemyState* create() {
            return il2cpp::create_object<app::GroundEnemyState>(get_class());
        }
    } // namespace GroundEnemyState
} // namespace app::classes::types
