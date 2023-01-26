#pragma once
#include <Modloader/app/structs/DropSlugEnemyPlaceholder.h>
#include <Modloader/app/structs/DropSlugEnemyPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropSlugEnemyPlaceholder {
        inline app::DropSlugEnemyPlaceholder__Class** type_info() {
            static app::DropSlugEnemyPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DropSlugEnemyPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DropSlugEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::DropSlugEnemyPlaceholder__Class>(type_info(), "", "DropSlugEnemyPlaceholder");
        }
        inline app::DropSlugEnemyPlaceholder* create() {
            return il2cpp::create_object<app::DropSlugEnemyPlaceholder>(get_class());
        }
    } // namespace DropSlugEnemyPlaceholder
} // namespace app::classes::types
