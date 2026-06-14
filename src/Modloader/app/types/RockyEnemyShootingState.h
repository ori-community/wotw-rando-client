#pragma once
#include <Modloader/app/structs/RockyEnemyShootingState.h>
#include <Modloader/app/structs/RockyEnemyShootingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyShootingState {
        inline app::RockyEnemyShootingState__Class** type_info() {
            static app::RockyEnemyShootingState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RockyEnemyShootingState__Class**)(modloader::win::memory::resolve_rva(0x0472E0A0));
            }
            return cache;
        }
        inline app::RockyEnemyShootingState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyShootingState__Class>(type_info(), "", "RockyEnemyShootingState");
        }
        inline app::RockyEnemyShootingState* create() {
            return il2cpp::create_object<app::RockyEnemyShootingState>(get_class());
        }
    } // namespace RockyEnemyShootingState
} // namespace app::classes::types
