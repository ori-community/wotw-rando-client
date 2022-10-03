#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DashableSwitchLogic {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DashableSwitchLogic__Class** type_info;
        inline app::DashableSwitchLogic__Class* get_class() {
            return il2cpp::get_class<app::DashableSwitchLogic__Class>(type_info, "", "DashableSwitchLogic");
        }
        inline app::DashableSwitchLogic* create() {
            return il2cpp::create_object<app::DashableSwitchLogic>(get_class());
        }
    } // namespace DashableSwitchLogic
} // namespace app::classes::types
