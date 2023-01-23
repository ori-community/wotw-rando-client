#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DropSlugEnemyPlaceholder__Class.h>
#include <Modloader/app/structs/DropSlugEnemyPlaceholder.h>

namespace app::classes::types {
    namespace DropSlugEnemyPlaceholder {
        namespace {
            inline app::DropSlugEnemyPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::DropSlugEnemyPlaceholder__Class** type_info = &type_info_ref;
        inline app::DropSlugEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::DropSlugEnemyPlaceholder__Class>(type_info, "", "DropSlugEnemyPlaceholder");
        }
        inline app::DropSlugEnemyPlaceholder* create() {
            return il2cpp::create_object<app::DropSlugEnemyPlaceholder>(get_class());
        }
    } // namespace DropSlugEnemyPlaceholder
} // namespace app::classes::types
