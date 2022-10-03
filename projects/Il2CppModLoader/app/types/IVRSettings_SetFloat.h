#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSettings_SetFloat {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSettings_SetFloat__Class** type_info;
        inline app::IVRSettings_SetFloat__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_SetFloat__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_SetFloat");
        }
        inline app::IVRSettings_SetFloat* create() {
            return il2cpp::create_object<app::IVRSettings_SetFloat>(get_class());
        }
    } // namespace IVRSettings_SetFloat
} // namespace app::classes::types
