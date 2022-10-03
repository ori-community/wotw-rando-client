#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwitchBoostController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SwitchBoostController__Class** type_info;
        inline app::SwitchBoostController__Class* get_class() {
            return il2cpp::get_class<app::SwitchBoostController__Class>(type_info, "frameworks.Switch", "SwitchBoostController");
        }
        inline app::SwitchBoostController* create() {
            return il2cpp::create_object<app::SwitchBoostController>(get_class());
        }
    } // namespace SwitchBoostController
} // namespace app::classes::types
