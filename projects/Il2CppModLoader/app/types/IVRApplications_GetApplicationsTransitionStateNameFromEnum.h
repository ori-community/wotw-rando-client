#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationsTransitionStateNameFromEnum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_GetApplicationsTransitionStateNameFromEnum__Class** type_info;
        inline app::IVRApplications_GetApplicationsTransitionStateNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationsTransitionStateNameFromEnum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationsTransitionStateNameFromEnum");
        }
        inline app::IVRApplications_GetApplicationsTransitionStateNameFromEnum* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationsTransitionStateNameFromEnum>(get_class());
        }
    } // namespace IVRApplications_GetApplicationsTransitionStateNameFromEnum
} // namespace app::classes::types
