#pragma once
#include <Modloader/app/structs/DashOwlEnemyPlaceholder.h>
#include <Modloader/app/structs/DashOwlEnemyPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashOwlEnemyPlaceholder {
        inline app::DashOwlEnemyPlaceholder__Class** type_info() {
            static app::DashOwlEnemyPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DashOwlEnemyPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DashOwlEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::DashOwlEnemyPlaceholder__Class>(type_info(), "", "DashOwlEnemyPlaceholder");
        }
        inline app::DashOwlEnemyPlaceholder* create() {
            return il2cpp::create_object<app::DashOwlEnemyPlaceholder>(get_class());
        }
    } // namespace DashOwlEnemyPlaceholder
} // namespace app::classes::types
