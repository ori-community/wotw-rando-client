#pragma once
#include <Modloader/app/structs/RockyEnemyClosingState.h>
#include <Modloader/app/structs/RockyEnemyClosingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyClosingState {
        inline app::RockyEnemyClosingState__Class** type_info() {
            static app::RockyEnemyClosingState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RockyEnemyClosingState__Class**)(modloader::win::memory::resolve_rva(0x047653B8));
            }
            return cache;
        }
        inline app::RockyEnemyClosingState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyClosingState__Class>(type_info(), "", "RockyEnemyClosingState");
        }
        inline app::RockyEnemyClosingState* create() {
            return il2cpp::create_object<app::RockyEnemyClosingState>(get_class());
        }
    } // namespace RockyEnemyClosingState
} // namespace app::classes::types
