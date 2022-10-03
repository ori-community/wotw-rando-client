#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwitchController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SwitchController__Class** type_info;
        inline app::SwitchController__Class* get_class() {
            return il2cpp::get_class<app::SwitchController__Class>(type_info, "frameworks.Switch", "SwitchController");
        }
        inline app::SwitchController* create() {
            return il2cpp::create_object<app::SwitchController>(get_class());
        }
    } // namespace SwitchController
} // namespace app::classes::types
