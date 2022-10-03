#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingBehaviour_TurnChargeSlamState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RammingBehaviour_TurnChargeSlamState__Class** type_info;
        inline app::RammingBehaviour_TurnChargeSlamState__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingBehaviour_TurnChargeSlamState__Class>(type_info, "Moon", "RammingBehaviour", "TurnChargeSlamState");
        }
        inline app::RammingBehaviour_TurnChargeSlamState* create() {
            return il2cpp::create_object<app::RammingBehaviour_TurnChargeSlamState>(get_class());
        }
    } // namespace RammingBehaviour_TurnChargeSlamState
} // namespace app::classes::types
