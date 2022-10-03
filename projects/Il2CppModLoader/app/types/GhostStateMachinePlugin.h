#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostStateMachinePlugin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostStateMachinePlugin__Class** type_info;
        inline app::GhostStateMachinePlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostStateMachinePlugin__Class>(type_info, "", "GhostStateMachinePlugin");
        }
        inline app::GhostStateMachinePlugin* create() {
            return il2cpp::create_object<app::GhostStateMachinePlugin>(get_class());
        }
    } // namespace GhostStateMachinePlugin
} // namespace app::classes::types
