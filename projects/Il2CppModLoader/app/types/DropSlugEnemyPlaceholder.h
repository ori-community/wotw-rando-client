#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DropSlugEnemyPlaceholder {
        namespace {
            app::DropSlugEnemyPlaceholder__Class* type_info_ref = nullptr;
        }
        app::DropSlugEnemyPlaceholder__Class** type_info = &type_info_ref;
        inline app::DropSlugEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::DropSlugEnemyPlaceholder__Class>(type_info, "", "DropSlugEnemyPlaceholder");
        }
        inline app::DropSlugEnemyPlaceholder* create() {
            return il2cpp::create_object<app::DropSlugEnemyPlaceholder>(get_class());
        }
    } // namespace DropSlugEnemyPlaceholder
} // namespace app::classes::types
