#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationsErrorNameFromEnum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_GetApplicationsErrorNameFromEnum__Class** type_info;
        inline app::IVRApplications_GetApplicationsErrorNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationsErrorNameFromEnum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationsErrorNameFromEnum");
        }
        inline app::IVRApplications_GetApplicationsErrorNameFromEnum* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationsErrorNameFromEnum>(get_class());
        }
    } // namespace IVRApplications_GetApplicationsErrorNameFromEnum
} // namespace app::classes::types
