#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSettings_GetBool {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSettings_GetBool__Class** type_info;
        inline app::IVRSettings_GetBool__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_GetBool__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_GetBool");
        }
        inline app::IVRSettings_GetBool* create() {
            return il2cpp::create_object<app::IVRSettings_GetBool>(get_class());
        }
    } // namespace IVRSettings_GetBool
} // namespace app::classes::types
