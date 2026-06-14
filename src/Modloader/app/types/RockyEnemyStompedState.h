#pragma once
#include <Modloader/app/structs/RockyEnemyStompedState.h>
#include <Modloader/app/structs/RockyEnemyStompedState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyStompedState {
        inline app::RockyEnemyStompedState__Class** type_info() {
            static app::RockyEnemyStompedState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RockyEnemyStompedState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RockyEnemyStompedState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyStompedState__Class>(type_info(), "", "RockyEnemyStompedState");
        }
        inline app::RockyEnemyStompedState* create() {
            return il2cpp::create_object<app::RockyEnemyStompedState>(get_class());
        }
    } // namespace RockyEnemyStompedState
} // namespace app::classes::types
