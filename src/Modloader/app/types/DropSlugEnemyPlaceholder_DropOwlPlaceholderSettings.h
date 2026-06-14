#pragma once
#include <Modloader/app/structs/DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings.h>
#include <Modloader/app/structs/DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings {
        inline app::DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Class** type_info() {
            static app::DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Class>(type_info(), "", "DropSlugEnemyPlaceholder", "DropOwlPlaceholderSettings");
        }
        inline app::DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings* create() {
            return il2cpp::create_object<app::DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings>(get_class());
        }
    } // namespace DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings
} // namespace app::classes::types
