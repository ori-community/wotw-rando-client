#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_DigitalMatrixDistortion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_FX_DigitalMatrixDistortion__Class** type_info;
        inline app::CameraFilterPack_FX_DigitalMatrixDistortion__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_DigitalMatrixDistortion__Class>(type_info, "", "CameraFilterPack_FX_DigitalMatrixDistortion");
        }
        inline app::CameraFilterPack_FX_DigitalMatrixDistortion* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_DigitalMatrixDistortion>(get_class());
        }
    } // namespace CameraFilterPack_FX_DigitalMatrixDistortion
} // namespace app::classes::types
