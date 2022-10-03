#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StarSlugEnemyAnimations {
        namespace {
            app::StarSlugEnemyAnimations__Class* type_info_ref = nullptr;
        }
        app::StarSlugEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::StarSlugEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::StarSlugEnemyAnimations__Class>(type_info, "", "StarSlugEnemyAnimations");
        }
        inline app::StarSlugEnemyAnimations* create() {
            return il2cpp::create_object<app::StarSlugEnemyAnimations>(get_class());
        }
    } // namespace StarSlugEnemyAnimations
} // namespace app::classes::types
