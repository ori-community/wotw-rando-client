#pragma once
#include <Modloader/app/structs/DropSlugEnemySettings.h>
#include <Modloader/app/structs/DropSlugEnemySettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropSlugEnemySettings {
        inline app::DropSlugEnemySettings__Class** type_info() {
            static app::DropSlugEnemySettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DropSlugEnemySettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DropSlugEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::DropSlugEnemySettings__Class>(type_info(), "", "DropSlugEnemySettings");
        }
        inline app::DropSlugEnemySettings* create() {
            return il2cpp::create_object<app::DropSlugEnemySettings>(get_class());
        }
    } // namespace DropSlugEnemySettings
} // namespace app::classes::types
