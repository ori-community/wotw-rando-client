#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetPropErrorNameFromEnum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetPropErrorNameFromEnum__Class** type_info;
        inline app::IVRSystem_GetPropErrorNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetPropErrorNameFromEnum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetPropErrorNameFromEnum");
        }
        inline app::IVRSystem_GetPropErrorNameFromEnum* create() {
            return il2cpp::create_object<app::IVRSystem_GetPropErrorNameFromEnum>(get_class());
        }
    } // namespace IVRSystem_GetPropErrorNameFromEnum
} // namespace app::classes::types
