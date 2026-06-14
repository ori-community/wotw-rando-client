#pragma once
#include <Modloader/app/structs/FishEnemyPlaceholder_FishEnemyPlaceholderSettings.h>
#include <Modloader/app/structs/FishEnemyPlaceholder_FishEnemyPlaceholderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FishEnemyPlaceholder_FishEnemyPlaceholderSettings {
        inline app::FishEnemyPlaceholder_FishEnemyPlaceholderSettings__Class** type_info() {
            static app::FishEnemyPlaceholder_FishEnemyPlaceholderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FishEnemyPlaceholder_FishEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FishEnemyPlaceholder_FishEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::FishEnemyPlaceholder_FishEnemyPlaceholderSettings__Class>(type_info(), "", "FishEnemyPlaceholder", "FishEnemyPlaceholderSettings");
        }
        inline app::FishEnemyPlaceholder_FishEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::FishEnemyPlaceholder_FishEnemyPlaceholderSettings>(get_class());
        }
    } // namespace FishEnemyPlaceholder_FishEnemyPlaceholderSettings
} // namespace app::classes::types
