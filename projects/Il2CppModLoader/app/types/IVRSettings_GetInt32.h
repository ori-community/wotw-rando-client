#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSettings_GetInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSettings_GetInt32__Class** type_info;
        inline app::IVRSettings_GetInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_GetInt32__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_GetInt32");
        }
        inline app::IVRSettings_GetInt32* create() {
            return il2cpp::create_object<app::IVRSettings_GetInt32>(get_class());
        }
    } // namespace IVRSettings_GetInt32
} // namespace app::classes::types
