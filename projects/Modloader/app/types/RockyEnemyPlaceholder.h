#pragma once
#include <Modloader/app/structs/RockyEnemyPlaceholder.h>
#include <Modloader/app/structs/RockyEnemyPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyPlaceholder {
        inline app::RockyEnemyPlaceholder__Class** type_info() {
            static app::RockyEnemyPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RockyEnemyPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RockyEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyPlaceholder__Class>(type_info(), "", "RockyEnemyPlaceholder");
        }
        inline app::RockyEnemyPlaceholder* create() {
            return il2cpp::create_object<app::RockyEnemyPlaceholder>(get_class());
        }
    } // namespace RockyEnemyPlaceholder
} // namespace app::classes::types
