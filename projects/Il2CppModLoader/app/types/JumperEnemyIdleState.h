#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JumperEnemyIdleState {
        inline app::JumperEnemyIdleState__Class** type_info = (app::JumperEnemyIdleState__Class**)(modloader::win::memory::resolve_rva(0x047813D0));
        inline app::JumperEnemyIdleState__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyIdleState__Class>(type_info, "", "JumperEnemyIdleState");
        }
        inline app::JumperEnemyIdleState* create() {
            return il2cpp::create_object<app::JumperEnemyIdleState>(get_class());
        }
    } // namespace JumperEnemyIdleState
} // namespace app::classes::types
