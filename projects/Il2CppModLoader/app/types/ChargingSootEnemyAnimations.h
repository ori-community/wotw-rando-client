#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChargingSootEnemyAnimations {
        namespace {
            app::ChargingSootEnemyAnimations__Class* type_info_ref = nullptr;
        }
        app::ChargingSootEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::ChargingSootEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::ChargingSootEnemyAnimations__Class>(type_info, "", "ChargingSootEnemyAnimations");
        }
        inline app::ChargingSootEnemyAnimations* create() {
            return il2cpp::create_object<app::ChargingSootEnemyAnimations>(get_class());
        }
    } // namespace ChargingSootEnemyAnimations
} // namespace app::classes::types
