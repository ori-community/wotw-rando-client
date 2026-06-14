#pragma once
#include <Modloader/app/structs/RockyEnemyTrappedState.h>
#include <Modloader/app/structs/RockyEnemyTrappedState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyTrappedState {
        inline app::RockyEnemyTrappedState__Class** type_info() {
            static app::RockyEnemyTrappedState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RockyEnemyTrappedState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RockyEnemyTrappedState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyTrappedState__Class>(type_info(), "", "RockyEnemyTrappedState");
        }
        inline app::RockyEnemyTrappedState* create() {
            return il2cpp::create_object<app::RockyEnemyTrappedState>(get_class());
        }
    } // namespace RockyEnemyTrappedState
} // namespace app::classes::types
