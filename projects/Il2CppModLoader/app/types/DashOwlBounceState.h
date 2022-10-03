#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DashOwlBounceState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DashOwlBounceState__Class** type_info;
        inline app::DashOwlBounceState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlBounceState__Class>(type_info, "", "DashOwlBounceState");
        }
        inline app::DashOwlBounceState* create() {
            return il2cpp::create_object<app::DashOwlBounceState>(get_class());
        }
    } // namespace DashOwlBounceState
} // namespace app::classes::types
