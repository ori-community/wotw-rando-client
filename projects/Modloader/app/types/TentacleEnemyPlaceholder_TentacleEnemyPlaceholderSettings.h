#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings {
        namespace {
            inline app::TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
        }
        inline app::TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Class** type_info = &type_info_ref;
        inline app::TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Class>(type_info, "", "TentacleEnemyPlaceholder", "TentacleEnemyPlaceholderSettings");
        }
        inline app::TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings>(get_class());
        }
    } // namespace TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings
} // namespace app::classes::types
