#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetControllerState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetControllerState__Class** type_info;
        inline app::IVRSystem_GetControllerState__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetControllerState__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetControllerState");
        }
        inline app::IVRSystem_GetControllerState* create() {
            return il2cpp::create_object<app::IVRSystem_GetControllerState>(get_class());
        }
    } // namespace IVRSystem_GetControllerState
} // namespace app::classes::types
