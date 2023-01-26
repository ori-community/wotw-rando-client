#pragma once
#include <Modloader/app/structs/RockyEnemyIdleState.h>
#include <Modloader/app/structs/RockyEnemyIdleState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyIdleState {
        inline app::RockyEnemyIdleState__Class** type_info() {
            static app::RockyEnemyIdleState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RockyEnemyIdleState__Class**)(modloader::win::memory::resolve_rva(0x047738F0));
            }
            return cache;
        }
        inline app::RockyEnemyIdleState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyIdleState__Class>(type_info(), "", "RockyEnemyIdleState");
        }
        inline app::RockyEnemyIdleState* create() {
            return il2cpp::create_object<app::RockyEnemyIdleState>(get_class());
        }
    } // namespace RockyEnemyIdleState
} // namespace app::classes::types
