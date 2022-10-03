#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DashOwlSpiritLeashedState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DashOwlSpiritLeashedState__Class** type_info;
        inline app::DashOwlSpiritLeashedState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlSpiritLeashedState__Class>(type_info, "", "DashOwlSpiritLeashedState");
        }
        inline app::DashOwlSpiritLeashedState* create() {
            return il2cpp::create_object<app::DashOwlSpiritLeashedState>(get_class());
        }
    } // namespace DashOwlSpiritLeashedState
} // namespace app::classes::types
