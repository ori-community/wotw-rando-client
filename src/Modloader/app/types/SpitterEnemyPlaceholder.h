#pragma once
#include <Modloader/app/structs/SpitterEnemyPlaceholder.h>
#include <Modloader/app/structs/SpitterEnemyPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemyPlaceholder {
        inline app::SpitterEnemyPlaceholder__Class** type_info() {
            static app::SpitterEnemyPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpitterEnemyPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpitterEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyPlaceholder__Class>(type_info(), "", "SpitterEnemyPlaceholder");
        }
        inline app::SpitterEnemyPlaceholder* create() {
            return il2cpp::create_object<app::SpitterEnemyPlaceholder>(get_class());
        }
    } // namespace SpitterEnemyPlaceholder
} // namespace app::classes::types
