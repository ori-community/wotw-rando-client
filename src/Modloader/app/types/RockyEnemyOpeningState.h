#pragma once
#include <Modloader/app/structs/RockyEnemyOpeningState.h>
#include <Modloader/app/structs/RockyEnemyOpeningState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyOpeningState {
        inline app::RockyEnemyOpeningState__Class** type_info() {
            static app::RockyEnemyOpeningState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RockyEnemyOpeningState__Class**)(modloader::win::memory::resolve_rva(0x0474FDB8));
            }
            return cache;
        }
        inline app::RockyEnemyOpeningState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyOpeningState__Class>(type_info(), "", "RockyEnemyOpeningState");
        }
        inline app::RockyEnemyOpeningState* create() {
            return il2cpp::create_object<app::RockyEnemyOpeningState>(get_class());
        }
    } // namespace RockyEnemyOpeningState
} // namespace app::classes::types
