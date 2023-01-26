#pragma once
#include <Modloader/app/structs/AcidSlugEnemyAnimations.h>
#include <Modloader/app/structs/AcidSlugEnemyAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AcidSlugEnemyAnimations {
        inline app::AcidSlugEnemyAnimations__Class** type_info() {
            static app::AcidSlugEnemyAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AcidSlugEnemyAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AcidSlugEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::AcidSlugEnemyAnimations__Class>(type_info(), "", "AcidSlugEnemyAnimations");
        }
        inline app::AcidSlugEnemyAnimations* create() {
            return il2cpp::create_object<app::AcidSlugEnemyAnimations>(get_class());
        }
    } // namespace AcidSlugEnemyAnimations
} // namespace app::classes::types
