#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSettings_SetInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSettings_SetInt32__Class** type_info;
        inline app::IVRSettings_SetInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_SetInt32__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_SetInt32");
        }
        inline app::IVRSettings_SetInt32* create() {
            return il2cpp::create_object<app::IVRSettings_SetInt32>(get_class());
        }
    } // namespace IVRSettings_SetInt32
} // namespace app::classes::types
