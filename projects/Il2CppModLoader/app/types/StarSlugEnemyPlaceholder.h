#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StarSlugEnemyPlaceholder {
        namespace {
            app::StarSlugEnemyPlaceholder__Class* type_info_ref = nullptr;
        }
        app::StarSlugEnemyPlaceholder__Class** type_info = &type_info_ref;
        inline app::StarSlugEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::StarSlugEnemyPlaceholder__Class>(type_info, "", "StarSlugEnemyPlaceholder");
        }
        inline app::StarSlugEnemyPlaceholder* create() {
            return il2cpp::create_object<app::StarSlugEnemyPlaceholder>(get_class());
        }
    } // namespace StarSlugEnemyPlaceholder
} // namespace app::classes::types
