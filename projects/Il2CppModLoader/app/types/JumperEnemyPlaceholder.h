#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumperEnemyPlaceholder {
        namespace {
            app::JumperEnemyPlaceholder__Class* type_info_ref = nullptr;
        }
        app::JumperEnemyPlaceholder__Class** type_info = &type_info_ref;
        inline app::JumperEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyPlaceholder__Class>(type_info, "", "JumperEnemyPlaceholder");
        }
        inline app::JumperEnemyPlaceholder* create() {
            return il2cpp::create_object<app::JumperEnemyPlaceholder>(get_class());
        }
    } // namespace JumperEnemyPlaceholder
} // namespace app::classes::types
