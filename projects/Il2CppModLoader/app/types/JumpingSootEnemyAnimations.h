#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumpingSootEnemyAnimations {
        namespace {
            app::JumpingSootEnemyAnimations__Class* type_info_ref = nullptr;
        }
        app::JumpingSootEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::JumpingSootEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::JumpingSootEnemyAnimations__Class>(type_info, "", "JumpingSootEnemyAnimations");
        }
        inline app::JumpingSootEnemyAnimations* create() {
            return il2cpp::create_object<app::JumpingSootEnemyAnimations>(get_class());
        }
    } // namespace JumpingSootEnemyAnimations
} // namespace app::classes::types
