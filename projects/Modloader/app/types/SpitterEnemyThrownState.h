#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpitterEnemyThrownState {
        inline app::SpitterEnemyThrownState__Class** type_info = (app::SpitterEnemyThrownState__Class**)(modloader::win::memory::resolve_rva(0x04748160));
        inline app::SpitterEnemyThrownState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyThrownState__Class>(type_info, "", "SpitterEnemyThrownState");
        }
        inline app::SpitterEnemyThrownState* create() {
            return il2cpp::create_object<app::SpitterEnemyThrownState>(get_class());
        }
    } // namespace SpitterEnemyThrownState
} // namespace app::classes::types
