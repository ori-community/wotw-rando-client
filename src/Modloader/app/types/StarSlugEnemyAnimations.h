#pragma once
#include <Modloader/app/structs/StarSlugEnemyAnimations.h>
#include <Modloader/app/structs/StarSlugEnemyAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StarSlugEnemyAnimations {
        inline app::StarSlugEnemyAnimations__Class** type_info() {
            static app::StarSlugEnemyAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StarSlugEnemyAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StarSlugEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::StarSlugEnemyAnimations__Class>(type_info(), "", "StarSlugEnemyAnimations");
        }
        inline app::StarSlugEnemyAnimations* create() {
            return il2cpp::create_object<app::StarSlugEnemyAnimations>(get_class());
        }
    } // namespace StarSlugEnemyAnimations
} // namespace app::classes::types
