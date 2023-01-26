#pragma once
#include <Modloader/app/structs/DropSlugEnemyAnimations.h>
#include <Modloader/app/structs/DropSlugEnemyAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropSlugEnemyAnimations {
        inline app::DropSlugEnemyAnimations__Class** type_info() {
            static app::DropSlugEnemyAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DropSlugEnemyAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DropSlugEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::DropSlugEnemyAnimations__Class>(type_info(), "", "DropSlugEnemyAnimations");
        }
        inline app::DropSlugEnemyAnimations* create() {
            return il2cpp::create_object<app::DropSlugEnemyAnimations>(get_class());
        }
    } // namespace DropSlugEnemyAnimations
} // namespace app::classes::types
