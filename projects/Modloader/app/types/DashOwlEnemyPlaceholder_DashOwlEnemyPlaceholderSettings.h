#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings {
        namespace {
            inline app::DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
        }
        inline app::DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings__Class** type_info = &type_info_ref;
        inline app::DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings__Class>(type_info, "", "DashOwlEnemyPlaceholder", "DashOwlEnemyPlaceholderSettings");
        }
        inline app::DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings>(get_class());
        }
    } // namespace DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings
} // namespace app::classes::types
