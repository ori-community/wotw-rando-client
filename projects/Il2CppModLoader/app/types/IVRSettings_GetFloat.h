#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSettings_GetFloat {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSettings_GetFloat__Class** type_info;
        inline app::IVRSettings_GetFloat__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_GetFloat__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_GetFloat");
        }
        inline app::IVRSettings_GetFloat* create() {
            return il2cpp::create_object<app::IVRSettings_GetFloat>(get_class());
        }
    } // namespace IVRSettings_GetFloat
} // namespace app::classes::types
