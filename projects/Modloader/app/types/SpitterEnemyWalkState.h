#pragma once
#include <Modloader/app/structs/SpitterEnemyWalkState.h>
#include <Modloader/app/structs/SpitterEnemyWalkState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemyWalkState {
        inline app::SpitterEnemyWalkState__Class** type_info() {
            static app::SpitterEnemyWalkState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpitterEnemyWalkState__Class**)(modloader::win::memory::resolve_rva(0x04762C18));
            }
            return cache;
        }
        inline app::SpitterEnemyWalkState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyWalkState__Class>(type_info(), "", "SpitterEnemyWalkState");
        }
        inline app::SpitterEnemyWalkState* create() {
            return il2cpp::create_object<app::SpitterEnemyWalkState>(get_class());
        }
    } // namespace SpitterEnemyWalkState
} // namespace app::classes::types
