#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpitterEnemyWalkState {
        inline app::SpitterEnemyWalkState__Class** type_info = (app::SpitterEnemyWalkState__Class**)(modloader::win::memory::resolve_rva(0x04762C18));
        inline app::SpitterEnemyWalkState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyWalkState__Class>(type_info, "", "SpitterEnemyWalkState");
        }
        inline app::SpitterEnemyWalkState* create() {
            return il2cpp::create_object<app::SpitterEnemyWalkState>(get_class());
        }
    } // namespace SpitterEnemyWalkState
} // namespace app::classes::types
