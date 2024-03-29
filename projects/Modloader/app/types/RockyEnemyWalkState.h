#pragma once
#include <Modloader/app/structs/RockyEnemyWalkState.h>
#include <Modloader/app/structs/RockyEnemyWalkState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyWalkState {
        inline app::RockyEnemyWalkState__Class** type_info() {
            static app::RockyEnemyWalkState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RockyEnemyWalkState__Class**)(modloader::win::memory::resolve_rva(0x04777B40));
            }
            return cache;
        }
        inline app::RockyEnemyWalkState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyWalkState__Class>(type_info(), "", "RockyEnemyWalkState");
        }
        inline app::RockyEnemyWalkState* create() {
            return il2cpp::create_object<app::RockyEnemyWalkState>(get_class());
        }
    } // namespace RockyEnemyWalkState
} // namespace app::classes::types
