#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Class.h>
#include <Modloader/app/structs/StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings.h>

namespace app::classes::types {
    namespace StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings {
        namespace {
            inline app::StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
        }
        inline app::StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Class** type_info = &type_info_ref;
        inline app::StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Class>(type_info, "", "StarSlugEnemyPlaceholder", "StarSlugEnemyPlaceholderSettings");
        }
        inline app::StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings>(get_class());
        }
    } // namespace StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings
} // namespace app::classes::types
