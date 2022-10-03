#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetControllerStateWithPose {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetControllerStateWithPose__Class** type_info;
        inline app::IVRSystem_GetControllerStateWithPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetControllerStateWithPose__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetControllerStateWithPose");
        }
        inline app::IVRSystem_GetControllerStateWithPose* create() {
            return il2cpp::create_object<app::IVRSystem_GetControllerStateWithPose>(get_class());
        }
    } // namespace IVRSystem_GetControllerStateWithPose
} // namespace app::classes::types
