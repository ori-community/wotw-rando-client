#pragma once
#include <Modloader/app/structs/TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings.h>
#include <Modloader/app/structs/TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings {
        inline app::TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Class** type_info() {
            static app::TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Class>(type_info(), "", "TentacleEnemyPlaceholder", "TentacleEnemyPlaceholderSettings");
        }
        inline app::TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings>(get_class());
        }
    } // namespace TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings
} // namespace app::classes::types
