#pragma once
#include <Modloader/app/structs/DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings.h>
#include <Modloader/app/structs/DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings {
        inline app::DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings__Class** type_info() {
            static app::DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings__Class>(type_info(), "", "DashOwlEnemyPlaceholder", "DashOwlEnemyPlaceholderSettings");
        }
        inline app::DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings>(get_class());
        }
    } // namespace DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings
} // namespace app::classes::types
