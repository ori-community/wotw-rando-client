#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Curve {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Drawing_Curve__Class** type_info;
        inline app::CameraFilterPack_Drawing_Curve__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Curve__Class>(type_info, "", "CameraFilterPack_Drawing_Curve");
        }
        inline app::CameraFilterPack_Drawing_Curve* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Curve>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Curve
} // namespace app::classes::types
