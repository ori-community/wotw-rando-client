#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingEnemyPlaceholder {
        namespace {
            app::RammingEnemyPlaceholder__Class* type_info_ref = nullptr;
        }
        app::RammingEnemyPlaceholder__Class** type_info = &type_info_ref;
        inline app::RammingEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::RammingEnemyPlaceholder__Class>(type_info, "", "RammingEnemyPlaceholder");
        }
        inline app::RammingEnemyPlaceholder* create() {
            return il2cpp::create_object<app::RammingEnemyPlaceholder>(get_class());
        }
    } // namespace RammingEnemyPlaceholder
} // namespace app::classes::types
