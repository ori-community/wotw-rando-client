#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyPlaceholder {
        namespace {
            app::RockyEnemyPlaceholder__Class* type_info_ref = nullptr;
        }
        app::RockyEnemyPlaceholder__Class** type_info = &type_info_ref;
        inline app::RockyEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyPlaceholder__Class>(type_info, "", "RockyEnemyPlaceholder");
        }
        inline app::RockyEnemyPlaceholder* create() {
            return il2cpp::create_object<app::RockyEnemyPlaceholder>(get_class());
        }
    } // namespace RockyEnemyPlaceholder
} // namespace app::classes::types
