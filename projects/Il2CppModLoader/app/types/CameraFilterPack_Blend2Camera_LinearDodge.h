#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_LinearDodge {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Blend2Camera_LinearDodge__Class** type_info;
        inline app::CameraFilterPack_Blend2Camera_LinearDodge__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_LinearDodge__Class>(type_info, "", "CameraFilterPack_Blend2Camera_LinearDodge");
        }
        inline app::CameraFilterPack_Blend2Camera_LinearDodge* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_LinearDodge>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_LinearDodge
} // namespace app::classes::types
