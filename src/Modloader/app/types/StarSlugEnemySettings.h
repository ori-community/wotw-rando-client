#pragma once
#include <Modloader/app/structs/StarSlugEnemySettings.h>
#include <Modloader/app/structs/StarSlugEnemySettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StarSlugEnemySettings {
        inline app::StarSlugEnemySettings__Class** type_info() {
            static app::StarSlugEnemySettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StarSlugEnemySettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StarSlugEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::StarSlugEnemySettings__Class>(type_info(), "", "StarSlugEnemySettings");
        }
        inline app::StarSlugEnemySettings* create() {
            return il2cpp::create_object<app::StarSlugEnemySettings>(get_class());
        }
    } // namespace StarSlugEnemySettings
} // namespace app::classes::types
