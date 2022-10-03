#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetControllerAxisTypeNameFromEnum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetControllerAxisTypeNameFromEnum__Class** type_info;
        inline app::IVRSystem_GetControllerAxisTypeNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetControllerAxisTypeNameFromEnum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetControllerAxisTypeNameFromEnum");
        }
        inline app::IVRSystem_GetControllerAxisTypeNameFromEnum* create() {
            return il2cpp::create_object<app::IVRSystem_GetControllerAxisTypeNameFromEnum>(get_class());
        }
    } // namespace IVRSystem_GetControllerAxisTypeNameFromEnum
} // namespace app::classes::types
