#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CVRSystem_GetControllerStateWithPosePacked {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CVRSystem_GetControllerStateWithPosePacked__Class** type_info;
        inline app::CVRSystem_GetControllerStateWithPosePacked__Class* get_class() {
            return il2cpp::get_nested_class<app::CVRSystem_GetControllerStateWithPosePacked__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRSystem", "_GetControllerStateWithPosePacked");
        }
        inline app::CVRSystem_GetControllerStateWithPosePacked* create() {
            return il2cpp::create_object<app::CVRSystem_GetControllerStateWithPosePacked>(get_class());
        }
    } // namespace CVRSystem_GetControllerStateWithPosePacked
} // namespace app::classes::types
