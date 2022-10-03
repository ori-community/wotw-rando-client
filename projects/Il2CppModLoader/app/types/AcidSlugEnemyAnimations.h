#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AcidSlugEnemyAnimations {
        namespace {
            app::AcidSlugEnemyAnimations__Class* type_info_ref = nullptr;
        }
        app::AcidSlugEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::AcidSlugEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::AcidSlugEnemyAnimations__Class>(type_info, "", "AcidSlugEnemyAnimations");
        }
        inline app::AcidSlugEnemyAnimations* create() {
            return il2cpp::create_object<app::AcidSlugEnemyAnimations>(get_class());
        }
    } // namespace AcidSlugEnemyAnimations
} // namespace app::classes::types
