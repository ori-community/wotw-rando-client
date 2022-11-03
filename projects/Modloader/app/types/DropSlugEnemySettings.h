#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DropSlugEnemySettings {
        namespace {
            inline app::DropSlugEnemySettings__Class* type_info_ref = nullptr;
        }
        inline app::DropSlugEnemySettings__Class** type_info = &type_info_ref;
        inline app::DropSlugEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::DropSlugEnemySettings__Class>(type_info, "", "DropSlugEnemySettings");
        }
        inline app::DropSlugEnemySettings* create() {
            return il2cpp::create_object<app::DropSlugEnemySettings>(get_class());
        }
    } // namespace DropSlugEnemySettings
} // namespace app::classes::types
