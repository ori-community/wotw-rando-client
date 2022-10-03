#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSettings_SetBool {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSettings_SetBool__Class** type_info;
        inline app::IVRSettings_SetBool__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_SetBool__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_SetBool");
        }
        inline app::IVRSettings_SetBool* create() {
            return il2cpp::create_object<app::IVRSettings_SetBool>(get_class());
        }
    } // namespace IVRSettings_SetBool
} // namespace app::classes::types
