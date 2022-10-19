#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpitterEnemySpiritLeashedState {
        inline app::SpitterEnemySpiritLeashedState__Class** type_info = (app::SpitterEnemySpiritLeashedState__Class**)(modloader::win::memory::resolve_rva(0x0478DF08));
        inline app::SpitterEnemySpiritLeashedState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemySpiritLeashedState__Class>(type_info, "", "SpitterEnemySpiritLeashedState");
        }
        inline app::SpitterEnemySpiritLeashedState* create() {
            return il2cpp::create_object<app::SpitterEnemySpiritLeashedState>(get_class());
        }
    } // namespace SpitterEnemySpiritLeashedState
} // namespace app::classes::types
