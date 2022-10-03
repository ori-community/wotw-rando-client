#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingBehaviour_ChargeSlamState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RammingBehaviour_ChargeSlamState__Class** type_info;
        inline app::RammingBehaviour_ChargeSlamState__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingBehaviour_ChargeSlamState__Class>(type_info, "Moon", "RammingBehaviour", "ChargeSlamState");
        }
        inline app::RammingBehaviour_ChargeSlamState* create() {
            return il2cpp::create_object<app::RammingBehaviour_ChargeSlamState>(get_class());
        }
    } // namespace RammingBehaviour_ChargeSlamState
} // namespace app::classes::types
