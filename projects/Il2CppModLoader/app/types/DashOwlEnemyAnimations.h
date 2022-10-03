#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DashOwlEnemyAnimations {
        namespace {
            app::DashOwlEnemyAnimations__Class* type_info_ref = nullptr;
        }
        app::DashOwlEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::DashOwlEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::DashOwlEnemyAnimations__Class>(type_info, "", "DashOwlEnemyAnimations");
        }
        inline app::DashOwlEnemyAnimations* create() {
            return il2cpp::create_object<app::DashOwlEnemyAnimations>(get_class());
        }
    } // namespace DashOwlEnemyAnimations
} // namespace app::classes::types
