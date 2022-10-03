#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleEnemyPlaceholder {
        namespace {
            app::TentacleEnemyPlaceholder__Class* type_info_ref = nullptr;
        }
        app::TentacleEnemyPlaceholder__Class** type_info = &type_info_ref;
        inline app::TentacleEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::TentacleEnemyPlaceholder__Class>(type_info, "", "TentacleEnemyPlaceholder");
        }
        inline app::TentacleEnemyPlaceholder* create() {
            return il2cpp::create_object<app::TentacleEnemyPlaceholder>(get_class());
        }
    } // namespace TentacleEnemyPlaceholder
} // namespace app::classes::types
