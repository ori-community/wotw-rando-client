#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingEnemyAnimations {
        namespace {
            app::RammingEnemyAnimations__Class* type_info_ref = nullptr;
        }
        app::RammingEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::RammingEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::RammingEnemyAnimations__Class>(type_info, "", "RammingEnemyAnimations");
        }
        inline app::RammingEnemyAnimations* create() {
            return il2cpp::create_object<app::RammingEnemyAnimations>(get_class());
        }
    } // namespace RammingEnemyAnimations
} // namespace app::classes::types
