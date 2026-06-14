#pragma once
#include <Modloader/app/structs/RammingEnemyPlaceholder.h>
#include <Modloader/app/structs/RammingEnemyPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingEnemyPlaceholder {
        inline app::RammingEnemyPlaceholder__Class** type_info() {
            static app::RammingEnemyPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RammingEnemyPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RammingEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::RammingEnemyPlaceholder__Class>(type_info(), "", "RammingEnemyPlaceholder");
        }
        inline app::RammingEnemyPlaceholder* create() {
            return il2cpp::create_object<app::RammingEnemyPlaceholder>(get_class());
        }
    } // namespace RammingEnemyPlaceholder
} // namespace app::classes::types
