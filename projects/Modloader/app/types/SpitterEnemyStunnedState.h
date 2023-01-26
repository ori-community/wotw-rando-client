#pragma once
#include <Modloader/app/structs/SpitterEnemyStunnedState.h>
#include <Modloader/app/structs/SpitterEnemyStunnedState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemyStunnedState {
        inline app::SpitterEnemyStunnedState__Class** type_info() {
            static app::SpitterEnemyStunnedState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpitterEnemyStunnedState__Class**)(modloader::win::memory::resolve_rva(0x04793FB0));
            }
            return cache;
        }
        inline app::SpitterEnemyStunnedState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyStunnedState__Class>(type_info(), "", "SpitterEnemyStunnedState");
        }
        inline app::SpitterEnemyStunnedState* create() {
            return il2cpp::create_object<app::SpitterEnemyStunnedState>(get_class());
        }
    } // namespace SpitterEnemyStunnedState
} // namespace app::classes::types
