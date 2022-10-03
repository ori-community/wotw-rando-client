#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShrineCombat_RunningState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShrineCombat_RunningState__Class** type_info;
        inline app::ShrineCombat_RunningState__Class* get_class() {
            return il2cpp::get_nested_class<app::ShrineCombat_RunningState__Class>(type_info, "", "ShrineCombat", "RunningState");
        }
        inline app::ShrineCombat_RunningState* create() {
            return il2cpp::create_object<app::ShrineCombat_RunningState>(get_class());
        }
    } // namespace ShrineCombat_RunningState
} // namespace app::classes::types
