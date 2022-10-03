#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacySwarmEnemyPlaceholder {
        namespace {
            app::LegacySwarmEnemyPlaceholder__Class* type_info_ref = nullptr;
        }
        app::LegacySwarmEnemyPlaceholder__Class** type_info = &type_info_ref;
        inline app::LegacySwarmEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::LegacySwarmEnemyPlaceholder__Class>(type_info, "", "LegacySwarmEnemyPlaceholder");
        }
        inline app::LegacySwarmEnemyPlaceholder* create() {
            return il2cpp::create_object<app::LegacySwarmEnemyPlaceholder>(get_class());
        }
    } // namespace LegacySwarmEnemyPlaceholder
} // namespace app::classes::types
