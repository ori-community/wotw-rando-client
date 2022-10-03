#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationAutoLaunch {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_GetApplicationAutoLaunch__Class** type_info;
        inline app::IVRApplications_GetApplicationAutoLaunch__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationAutoLaunch__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationAutoLaunch");
        }
        inline app::IVRApplications_GetApplicationAutoLaunch* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationAutoLaunch>(get_class());
        }
    } // namespace IVRApplications_GetApplicationAutoLaunch
} // namespace app::classes::types
