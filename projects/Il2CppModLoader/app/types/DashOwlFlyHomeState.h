#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DashOwlFlyHomeState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DashOwlFlyHomeState__Class** type_info;
        inline app::DashOwlFlyHomeState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlFlyHomeState__Class>(type_info, "", "DashOwlFlyHomeState");
        }
        inline app::DashOwlFlyHomeState* create() {
            return il2cpp::create_object<app::DashOwlFlyHomeState>(get_class());
        }
    } // namespace DashOwlFlyHomeState
} // namespace app::classes::types
