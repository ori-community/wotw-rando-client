#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings {
        namespace {
            app::DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Class* type_info_ref = nullptr;
        }
        app::DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Class** type_info = &type_info_ref;
        inline app::DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Class>(type_info, "", "DropSlugEnemyPlaceholder", "DropOwlPlaceholderSettings");
        }
        inline app::DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings* create() {
            return il2cpp::create_object<app::DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings>(get_class());
        }
    } // namespace DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings
} // namespace app::classes::types
