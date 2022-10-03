#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ControllerShakeLogic {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ControllerShakeLogic__Class** type_info;
        inline app::ControllerShakeLogic__Class* get_class() {
            return il2cpp::get_class<app::ControllerShakeLogic__Class>(type_info, "", "ControllerShakeLogic");
        }
        inline app::ControllerShakeLogic* create() {
            return il2cpp::create_object<app::ControllerShakeLogic>(get_class());
        }
    } // namespace ControllerShakeLogic
} // namespace app::classes::types
