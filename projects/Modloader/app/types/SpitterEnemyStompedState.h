#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpitterEnemyStompedState {
        inline app::SpitterEnemyStompedState__Class** type_info = (app::SpitterEnemyStompedState__Class**)(modloader::win::memory::resolve_rva(0x04712D78));
        inline app::SpitterEnemyStompedState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyStompedState__Class>(type_info, "", "SpitterEnemyStompedState");
        }
        inline app::SpitterEnemyStompedState* create() {
            return il2cpp::create_object<app::SpitterEnemyStompedState>(get_class());
        }
    } // namespace SpitterEnemyStompedState
} // namespace app::classes::types
