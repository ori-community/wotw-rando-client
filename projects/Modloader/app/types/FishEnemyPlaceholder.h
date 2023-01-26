#pragma once
#include <Modloader/app/structs/FishEnemyPlaceholder.h>
#include <Modloader/app/structs/FishEnemyPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FishEnemyPlaceholder {
        inline app::FishEnemyPlaceholder__Class** type_info() {
            static app::FishEnemyPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FishEnemyPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FishEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::FishEnemyPlaceholder__Class>(type_info(), "", "FishEnemyPlaceholder");
        }
        inline app::FishEnemyPlaceholder* create() {
            return il2cpp::create_object<app::FishEnemyPlaceholder>(get_class());
        }
    } // namespace FishEnemyPlaceholder
} // namespace app::classes::types
