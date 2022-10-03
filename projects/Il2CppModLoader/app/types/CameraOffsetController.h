#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraOffsetController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraOffsetController__Class** type_info;
        inline app::CameraOffsetController__Class* get_class() {
            return il2cpp::get_class<app::CameraOffsetController__Class>(type_info, "", "CameraOffsetController");
        }
        inline app::CameraOffsetController* create() {
            return il2cpp::create_object<app::CameraOffsetController>(get_class());
        }
    } // namespace CameraOffsetController
} // namespace app::classes::types
