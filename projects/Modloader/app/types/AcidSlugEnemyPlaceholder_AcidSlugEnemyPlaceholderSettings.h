#pragma once
#include <Modloader/app/structs/AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings.h>
#include <Modloader/app/structs/AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings {
        inline app::AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings__Class** type_info() {
            static app::AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings__Class>(type_info(), "", "AcidSlugEnemyPlaceholder", "AcidSlugEnemyPlaceholderSettings");
        }
        inline app::AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings>(get_class());
        }
    } // namespace AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings
} // namespace app::classes::types
