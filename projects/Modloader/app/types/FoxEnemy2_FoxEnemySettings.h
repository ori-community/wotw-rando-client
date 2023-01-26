#pragma once
#include <Modloader/app/structs/FoxEnemy2_FoxEnemySettings.h>
#include <Modloader/app/structs/FoxEnemy2_FoxEnemySettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FoxEnemy2_FoxEnemySettings {
        inline app::FoxEnemy2_FoxEnemySettings__Class** type_info() {
            static app::FoxEnemy2_FoxEnemySettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FoxEnemy2_FoxEnemySettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FoxEnemy2_FoxEnemySettings__Class* get_class() {
            return il2cpp::get_nested_class<app::FoxEnemy2_FoxEnemySettings__Class>(type_info(), "", "FoxEnemy2", "FoxEnemySettings");
        }
        inline app::FoxEnemy2_FoxEnemySettings* create() {
            return il2cpp::create_object<app::FoxEnemy2_FoxEnemySettings>(get_class());
        }
    } // namespace FoxEnemy2_FoxEnemySettings
} // namespace app::classes::types
