#pragma once
#include <Modloader/app/structs/AcidSlugEnemyPlaceholder.h>
#include <Modloader/app/structs/AcidSlugEnemyPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AcidSlugEnemyPlaceholder {
        inline app::AcidSlugEnemyPlaceholder__Class** type_info() {
            static app::AcidSlugEnemyPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AcidSlugEnemyPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AcidSlugEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::AcidSlugEnemyPlaceholder__Class>(type_info(), "", "AcidSlugEnemyPlaceholder");
        }
        inline app::AcidSlugEnemyPlaceholder* create() {
            return il2cpp::create_object<app::AcidSlugEnemyPlaceholder>(get_class());
        }
    } // namespace AcidSlugEnemyPlaceholder
} // namespace app::classes::types
