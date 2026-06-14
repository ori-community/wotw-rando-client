#pragma once
#include <Modloader/app/structs/StarSlugEnemyPlaceholder.h>
#include <Modloader/app/structs/StarSlugEnemyPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StarSlugEnemyPlaceholder {
        inline app::StarSlugEnemyPlaceholder__Class** type_info() {
            static app::StarSlugEnemyPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StarSlugEnemyPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StarSlugEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::StarSlugEnemyPlaceholder__Class>(type_info(), "", "StarSlugEnemyPlaceholder");
        }
        inline app::StarSlugEnemyPlaceholder* create() {
            return il2cpp::create_object<app::StarSlugEnemyPlaceholder>(get_class());
        }
    } // namespace StarSlugEnemyPlaceholder
} // namespace app::classes::types
