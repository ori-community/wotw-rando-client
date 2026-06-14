#pragma once
#include <Modloader/app/structs/JumperEnemyPlaceholder.h>
#include <Modloader/app/structs/JumperEnemyPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumperEnemyPlaceholder {
        inline app::JumperEnemyPlaceholder__Class** type_info() {
            static app::JumperEnemyPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JumperEnemyPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JumperEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyPlaceholder__Class>(type_info(), "", "JumperEnemyPlaceholder");
        }
        inline app::JumperEnemyPlaceholder* create() {
            return il2cpp::create_object<app::JumperEnemyPlaceholder>(get_class());
        }
    } // namespace JumperEnemyPlaceholder
} // namespace app::classes::types
