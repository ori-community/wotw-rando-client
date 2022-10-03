#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwitchUndockingController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SwitchUndockingController__Class** type_info;
        inline app::SwitchUndockingController__Class* get_class() {
            return il2cpp::get_class<app::SwitchUndockingController__Class>(type_info, "UberShader.optimizations.gc", "SwitchUndockingController");
        }
        inline app::SwitchUndockingController* create() {
            return il2cpp::create_object<app::SwitchUndockingController>(get_class());
        }
    } // namespace SwitchUndockingController
} // namespace app::classes::types
