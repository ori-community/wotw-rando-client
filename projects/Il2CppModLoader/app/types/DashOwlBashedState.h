#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DashOwlBashedState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DashOwlBashedState__Class** type_info;
        inline app::DashOwlBashedState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlBashedState__Class>(type_info, "", "DashOwlBashedState");
        }
        inline app::DashOwlBashedState* create() {
            return il2cpp::create_object<app::DashOwlBashedState>(get_class());
        }
    } // namespace DashOwlBashedState
} // namespace app::classes::types
