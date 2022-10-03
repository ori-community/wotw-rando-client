#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraOffsetController_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraOffsetController_c__Class** type_info;
        inline app::CameraOffsetController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraOffsetController_c__Class>(type_info, "", "CameraOffsetController", "<>c");
        }
        inline app::CameraOffsetController_c* create() {
            return il2cpp::create_object<app::CameraOffsetController_c>(get_class());
        }
    } // namespace CameraOffsetController_c
} // namespace app::classes::types
