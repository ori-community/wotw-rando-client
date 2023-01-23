#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JumperEnemyThrownState__Class.h>
#include <Modloader/app/structs/JumperEnemyThrownState.h>

namespace app::classes::types {
    namespace JumperEnemyThrownState {
        inline app::JumperEnemyThrownState__Class** type_info = (app::JumperEnemyThrownState__Class**)(modloader::win::memory::resolve_rva(0x04779D80));
        inline app::JumperEnemyThrownState__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyThrownState__Class>(type_info, "", "JumperEnemyThrownState");
        }
        inline app::JumperEnemyThrownState* create() {
            return il2cpp::create_object<app::JumperEnemyThrownState>(get_class());
        }
    } // namespace JumperEnemyThrownState
} // namespace app::classes::types
