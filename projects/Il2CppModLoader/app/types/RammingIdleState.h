#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingIdleState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RammingIdleState__Class** type_info;
        inline app::RammingIdleState__Class* get_class() {
            return il2cpp::get_class<app::RammingIdleState__Class>(type_info, "", "RammingIdleState");
        }
        inline app::RammingIdleState* create() {
            return il2cpp::create_object<app::RammingIdleState>(get_class());
        }
    } // namespace RammingIdleState
} // namespace app::classes::types
