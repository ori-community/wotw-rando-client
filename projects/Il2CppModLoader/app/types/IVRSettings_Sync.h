#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSettings_Sync {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSettings_Sync__Class** type_info;
        inline app::IVRSettings_Sync__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_Sync__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_Sync");
        }
        inline app::IVRSettings_Sync* create() {
            return il2cpp::create_object<app::IVRSettings_Sync>(get_class());
        }
    } // namespace IVRSettings_Sync
} // namespace app::classes::types
