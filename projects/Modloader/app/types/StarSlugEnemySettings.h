#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StarSlugEnemySettings__Class.h>
#include <Modloader/app/structs/StarSlugEnemySettings.h>

namespace app::classes::types {
    namespace StarSlugEnemySettings {
        namespace {
            inline app::StarSlugEnemySettings__Class* type_info_ref = nullptr;
        }
        inline app::StarSlugEnemySettings__Class** type_info = &type_info_ref;
        inline app::StarSlugEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::StarSlugEnemySettings__Class>(type_info, "", "StarSlugEnemySettings");
        }
        inline app::StarSlugEnemySettings* create() {
            return il2cpp::create_object<app::StarSlugEnemySettings>(get_class());
        }
    } // namespace StarSlugEnemySettings
} // namespace app::classes::types
