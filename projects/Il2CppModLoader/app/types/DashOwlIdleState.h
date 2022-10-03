#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DashOwlIdleState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DashOwlIdleState__Class** type_info;
        inline app::DashOwlIdleState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlIdleState__Class>(type_info, "", "DashOwlIdleState");
        }
        inline app::DashOwlIdleState* create() {
            return il2cpp::create_object<app::DashOwlIdleState>(get_class());
        }
    } // namespace DashOwlIdleState
} // namespace app::classes::types
