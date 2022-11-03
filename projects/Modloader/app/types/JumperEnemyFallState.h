#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JumperEnemyFallState {
        inline app::JumperEnemyFallState__Class** type_info = (app::JumperEnemyFallState__Class**)(modloader::win::memory::resolve_rva(0x04704D70));
        inline app::JumperEnemyFallState__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyFallState__Class>(type_info, "", "JumperEnemyFallState");
        }
        inline app::JumperEnemyFallState* create() {
            return il2cpp::create_object<app::JumperEnemyFallState>(get_class());
        }
    } // namespace JumperEnemyFallState
} // namespace app::classes::types
