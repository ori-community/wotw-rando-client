#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraShakeLogic {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraShakeLogic__Class** type_info;
        inline app::CameraShakeLogic__Class* get_class() {
            return il2cpp::get_class<app::CameraShakeLogic__Class>(type_info, "", "CameraShakeLogic");
        }
        inline app::CameraShakeLogic* create() {
            return il2cpp::create_object<app::CameraShakeLogic>(get_class());
        }
    } // namespace CameraShakeLogic
} // namespace app::classes::types
