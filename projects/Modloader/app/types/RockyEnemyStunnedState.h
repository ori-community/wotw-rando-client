#pragma once
#include <Modloader/app/structs/RockyEnemyStunnedState.h>
#include <Modloader/app/structs/RockyEnemyStunnedState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyStunnedState {
        inline app::RockyEnemyStunnedState__Class** type_info() {
            static app::RockyEnemyStunnedState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RockyEnemyStunnedState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RockyEnemyStunnedState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyStunnedState__Class>(type_info(), "", "RockyEnemyStunnedState");
        }
        inline app::RockyEnemyStunnedState* create() {
            return il2cpp::create_object<app::RockyEnemyStunnedState>(get_class());
        }
    } // namespace RockyEnemyStunnedState
} // namespace app::classes::types
