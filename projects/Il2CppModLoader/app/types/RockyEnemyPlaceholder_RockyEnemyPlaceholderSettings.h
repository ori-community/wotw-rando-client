#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings {
        namespace {
            app::RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
        }
        app::RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings__Class** type_info = &type_info_ref;
        inline app::RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings__Class>(type_info, "", "RockyEnemyPlaceholder", "RockyEnemyPlaceholderSettings");
        }
        inline app::RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings>(get_class());
        }
    } // namespace RockyEnemyPlaceholder_RockyEnemyPlaceholderSettings
} // namespace app::classes::types
