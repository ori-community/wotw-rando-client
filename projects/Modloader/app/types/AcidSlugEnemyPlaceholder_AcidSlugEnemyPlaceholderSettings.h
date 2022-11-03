#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings {
        namespace {
            inline app::AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
        }
        inline app::AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings__Class** type_info = &type_info_ref;
        inline app::AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings__Class>(type_info, "", "AcidSlugEnemyPlaceholder", "AcidSlugEnemyPlaceholderSettings");
        }
        inline app::AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings>(get_class());
        }
    } // namespace AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings
} // namespace app::classes::types
