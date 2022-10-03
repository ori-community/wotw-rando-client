#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingBehaviour_ExhaustState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RammingBehaviour_ExhaustState__Class** type_info;
        inline app::RammingBehaviour_ExhaustState__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingBehaviour_ExhaustState__Class>(type_info, "Moon", "RammingBehaviour", "ExhaustState");
        }
        inline app::RammingBehaviour_ExhaustState* create() {
            return il2cpp::create_object<app::RammingBehaviour_ExhaustState>(get_class());
        }
    } // namespace RammingBehaviour_ExhaustState
} // namespace app::classes::types
