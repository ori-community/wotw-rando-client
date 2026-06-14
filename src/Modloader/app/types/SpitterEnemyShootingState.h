#pragma once
#include <Modloader/app/structs/SpitterEnemyShootingState.h>
#include <Modloader/app/structs/SpitterEnemyShootingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemyShootingState {
        inline app::SpitterEnemyShootingState__Class** type_info() {
            static app::SpitterEnemyShootingState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpitterEnemyShootingState__Class**)(modloader::win::memory::resolve_rva(0x0472C098));
            }
            return cache;
        }
        inline app::SpitterEnemyShootingState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyShootingState__Class>(type_info(), "", "SpitterEnemyShootingState");
        }
        inline app::SpitterEnemyShootingState* create() {
            return il2cpp::create_object<app::SpitterEnemyShootingState>(get_class());
        }
    } // namespace SpitterEnemyShootingState
} // namespace app::classes::types
