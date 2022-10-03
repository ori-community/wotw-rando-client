#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingBehaviour_ChaseState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RammingBehaviour_ChaseState__Class** type_info;
        inline app::RammingBehaviour_ChaseState__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingBehaviour_ChaseState__Class>(type_info, "Moon", "RammingBehaviour", "ChaseState");
        }
        inline app::RammingBehaviour_ChaseState* create() {
            return il2cpp::create_object<app::RammingBehaviour_ChaseState>(get_class());
        }
    } // namespace RammingBehaviour_ChaseState
} // namespace app::classes::types
