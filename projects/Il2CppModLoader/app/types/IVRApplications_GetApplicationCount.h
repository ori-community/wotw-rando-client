#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationCount {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_GetApplicationCount__Class** type_info;
        inline app::IVRApplications_GetApplicationCount__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationCount__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationCount");
        }
        inline app::IVRApplications_GetApplicationCount* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationCount>(get_class());
        }
    } // namespace IVRApplications_GetApplicationCount
} // namespace app::classes::types
