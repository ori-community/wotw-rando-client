#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_LinearBurn {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Blend2Camera_LinearBurn__Class** type_info;
        inline app::CameraFilterPack_Blend2Camera_LinearBurn__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_LinearBurn__Class>(type_info, "", "CameraFilterPack_Blend2Camera_LinearBurn");
        }
        inline app::CameraFilterPack_Blend2Camera_LinearBurn* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_LinearBurn>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_LinearBurn
} // namespace app::classes::types
