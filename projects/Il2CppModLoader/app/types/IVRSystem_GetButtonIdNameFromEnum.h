#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetButtonIdNameFromEnum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetButtonIdNameFromEnum__Class** type_info;
        inline app::IVRSystem_GetButtonIdNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetButtonIdNameFromEnum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetButtonIdNameFromEnum");
        }
        inline app::IVRSystem_GetButtonIdNameFromEnum* create() {
            return il2cpp::create_object<app::IVRSystem_GetButtonIdNameFromEnum>(get_class());
        }
    } // namespace IVRSystem_GetButtonIdNameFromEnum
} // namespace app::classes::types
