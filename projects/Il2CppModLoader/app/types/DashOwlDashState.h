#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DashOwlDashState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DashOwlDashState__Class** type_info;
        inline app::DashOwlDashState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlDashState__Class>(type_info, "", "DashOwlDashState");
        }
        inline app::DashOwlDashState* create() {
            return il2cpp::create_object<app::DashOwlDashState>(get_class());
        }
    } // namespace DashOwlDashState
} // namespace app::classes::types
