#pragma once
#include <Modloader/app/structs/StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings.h>
#include <Modloader/app/structs/StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings {
        inline app::StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Class** type_info() {
            static app::StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Class>(type_info(), "", "StarSlugEnemyPlaceholder", "StarSlugEnemyPlaceholderSettings");
        }
        inline app::StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings>(get_class());
        }
    } // namespace StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings
} // namespace app::classes::types
