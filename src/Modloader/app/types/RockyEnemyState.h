#pragma once
#include <Modloader/app/structs/RockyEnemyState.h>
#include <Modloader/app/structs/RockyEnemyState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyState {
        inline app::RockyEnemyState__Class** type_info() {
            static app::RockyEnemyState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RockyEnemyState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RockyEnemyState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyState__Class>(type_info(), "", "RockyEnemyState");
        }
        inline app::RockyEnemyState* create() {
            return il2cpp::create_object<app::RockyEnemyState>(get_class());
        }
    } // namespace RockyEnemyState
} // namespace app::classes::types
