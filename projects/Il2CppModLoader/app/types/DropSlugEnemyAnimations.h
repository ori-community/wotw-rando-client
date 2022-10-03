#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DropSlugEnemyAnimations {
        namespace {
            app::DropSlugEnemyAnimations__Class* type_info_ref = nullptr;
        }
        app::DropSlugEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::DropSlugEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::DropSlugEnemyAnimations__Class>(type_info, "", "DropSlugEnemyAnimations");
        }
        inline app::DropSlugEnemyAnimations* create() {
            return il2cpp::create_object<app::DropSlugEnemyAnimations>(get_class());
        }
    } // namespace DropSlugEnemyAnimations
} // namespace app::classes::types
