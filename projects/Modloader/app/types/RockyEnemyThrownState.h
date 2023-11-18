#pragma once
#include <Modloader/app/structs/RockyEnemyThrownState.h>
#include <Modloader/app/structs/RockyEnemyThrownState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyThrownState {
        inline app::RockyEnemyThrownState__Class** type_info() {
            static app::RockyEnemyThrownState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RockyEnemyThrownState__Class**)(modloader::win::memory::resolve_rva(0x04796C68));
            }
            return cache;
        }
        inline app::RockyEnemyThrownState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyThrownState__Class>(type_info(), "", "RockyEnemyThrownState");
        }
        inline app::RockyEnemyThrownState* create() {
            return il2cpp::create_object<app::RockyEnemyThrownState>(get_class());
        }
    } // namespace RockyEnemyThrownState
} // namespace app::classes::types
