#pragma once
#include <Modloader/app/structs/AcidSlugEnemySettings.h>
#include <Modloader/app/structs/AcidSlugEnemySettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AcidSlugEnemySettings {
        inline app::AcidSlugEnemySettings__Class** type_info() {
            static app::AcidSlugEnemySettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AcidSlugEnemySettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AcidSlugEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::AcidSlugEnemySettings__Class>(type_info(), "", "AcidSlugEnemySettings");
        }
        inline app::AcidSlugEnemySettings* create() {
            return il2cpp::create_object<app::AcidSlugEnemySettings>(get_class());
        }
    } // namespace AcidSlugEnemySettings
} // namespace app::classes::types
