#pragma once
#include <Modloader/app/structs/LegacySwarmEnemyPlaceholder.h>
#include <Modloader/app/structs/LegacySwarmEnemyPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacySwarmEnemyPlaceholder {
        inline app::LegacySwarmEnemyPlaceholder__Class** type_info() {
            static app::LegacySwarmEnemyPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacySwarmEnemyPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacySwarmEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::LegacySwarmEnemyPlaceholder__Class>(type_info(), "", "LegacySwarmEnemyPlaceholder");
        }
        inline app::LegacySwarmEnemyPlaceholder* create() {
            return il2cpp::create_object<app::LegacySwarmEnemyPlaceholder>(get_class());
        }
    } // namespace LegacySwarmEnemyPlaceholder
} // namespace app::classes::types
