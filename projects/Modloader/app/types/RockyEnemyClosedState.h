#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RockyEnemyClosedState {
        inline app::RockyEnemyClosedState__Class** type_info = (app::RockyEnemyClosedState__Class**)(modloader::win::memory::resolve_rva(0x0475B870));
        inline app::RockyEnemyClosedState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyClosedState__Class>(type_info, "", "RockyEnemyClosedState");
        }
        inline app::RockyEnemyClosedState* create() {
            return il2cpp::create_object<app::RockyEnemyClosedState>(get_class());
        }
    } // namespace RockyEnemyClosedState
} // namespace app::classes::types
