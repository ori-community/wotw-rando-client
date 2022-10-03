#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MortarWormIdleState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MortarWormIdleState__Class** type_info;
        inline app::MortarWormIdleState__Class* get_class() {
            return il2cpp::get_class<app::MortarWormIdleState__Class>(type_info, "", "MortarWormIdleState");
        }
        inline app::MortarWormIdleState* create() {
            return il2cpp::create_object<app::MortarWormIdleState>(get_class());
        }
    } // namespace MortarWormIdleState
} // namespace app::classes::types
