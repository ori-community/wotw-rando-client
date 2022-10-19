#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpitterEnemyTrappedState {
        inline app::SpitterEnemyTrappedState__Class** type_info = (app::SpitterEnemyTrappedState__Class**)(modloader::win::memory::resolve_rva(0x04768F28));
        inline app::SpitterEnemyTrappedState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyTrappedState__Class>(type_info, "", "SpitterEnemyTrappedState");
        }
        inline app::SpitterEnemyTrappedState* create() {
            return il2cpp::create_object<app::SpitterEnemyTrappedState>(get_class());
        }
    } // namespace SpitterEnemyTrappedState
} // namespace app::classes::types
