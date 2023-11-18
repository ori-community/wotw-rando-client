#pragma once
#include <Modloader/app/structs/RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings.h>
#include <Modloader/app/structs/RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings {
        inline app::RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings__Class** type_info() {
            static app::RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings__Class>(type_info(), "", "RockyEnemyPlaceholder", "RockyEnemyPlaceholderSettings");
        }
        inline app::RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings>(get_class());
        }
    } // namespace RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings
} // namespace app::classes::types
