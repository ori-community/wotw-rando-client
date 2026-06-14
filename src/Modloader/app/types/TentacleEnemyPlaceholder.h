#pragma once
#include <Modloader/app/structs/TentacleEnemyPlaceholder.h>
#include <Modloader/app/structs/TentacleEnemyPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleEnemyPlaceholder {
        inline app::TentacleEnemyPlaceholder__Class** type_info() {
            static app::TentacleEnemyPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleEnemyPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::TentacleEnemyPlaceholder__Class>(type_info(), "", "TentacleEnemyPlaceholder");
        }
        inline app::TentacleEnemyPlaceholder* create() {
            return il2cpp::create_object<app::TentacleEnemyPlaceholder>(get_class());
        }
    } // namespace TentacleEnemyPlaceholder
} // namespace app::classes::types
