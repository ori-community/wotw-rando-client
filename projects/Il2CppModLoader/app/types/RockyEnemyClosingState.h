#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RockyEnemyClosingState {
        inline app::RockyEnemyClosingState__Class** type_info = (app::RockyEnemyClosingState__Class**)(modloader::win::memory::resolve_rva(0x047653B8));
        inline app::RockyEnemyClosingState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyClosingState__Class>(type_info, "", "RockyEnemyClosingState");
        }
        inline app::RockyEnemyClosingState* create() {
            return il2cpp::create_object<app::RockyEnemyClosingState>(get_class());
        }
    } // namespace RockyEnemyClosingState
} // namespace app::classes::types
