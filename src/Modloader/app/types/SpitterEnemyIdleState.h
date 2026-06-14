#pragma once
#include <Modloader/app/structs/SpitterEnemyIdleState.h>
#include <Modloader/app/structs/SpitterEnemyIdleState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemyIdleState {
        inline app::SpitterEnemyIdleState__Class** type_info() {
            static app::SpitterEnemyIdleState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpitterEnemyIdleState__Class**)(modloader::win::memory::resolve_rva(0x04773290));
            }
            return cache;
        }
        inline app::SpitterEnemyIdleState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyIdleState__Class>(type_info(), "", "SpitterEnemyIdleState");
        }
        inline app::SpitterEnemyIdleState* create() {
            return il2cpp::create_object<app::SpitterEnemyIdleState>(get_class());
        }
    } // namespace SpitterEnemyIdleState
} // namespace app::classes::types
