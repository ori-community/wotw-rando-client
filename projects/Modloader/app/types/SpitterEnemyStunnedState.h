#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpitterEnemyStunnedState__Class.h>
#include <Modloader/app/structs/SpitterEnemyStunnedState.h>

namespace app::classes::types {
    namespace SpitterEnemyStunnedState {
        inline app::SpitterEnemyStunnedState__Class** type_info = (app::SpitterEnemyStunnedState__Class**)(modloader::win::memory::resolve_rva(0x04793FB0));
        inline app::SpitterEnemyStunnedState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyStunnedState__Class>(type_info, "", "SpitterEnemyStunnedState");
        }
        inline app::SpitterEnemyStunnedState* create() {
            return il2cpp::create_object<app::SpitterEnemyStunnedState>(get_class());
        }
    } // namespace SpitterEnemyStunnedState
} // namespace app::classes::types
