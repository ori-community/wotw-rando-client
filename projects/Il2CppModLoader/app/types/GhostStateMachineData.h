#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostStateMachineData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostStateMachineData__Class** type_info;
        inline app::GhostStateMachineData__Class* get_class() {
            return il2cpp::get_class<app::GhostStateMachineData__Class>(type_info, "", "GhostStateMachineData");
        }
        inline app::GhostStateMachineData* create() {
            return il2cpp::create_object<app::GhostStateMachineData>(get_class());
        }
    } // namespace GhostStateMachineData
} // namespace app::classes::types
