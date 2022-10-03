#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_LaunchDashboardOverlay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_LaunchDashboardOverlay__Class** type_info;
        inline app::IVRApplications_LaunchDashboardOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_LaunchDashboardOverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_LaunchDashboardOverlay");
        }
        inline app::IVRApplications_LaunchDashboardOverlay* create() {
            return il2cpp::create_object<app::IVRApplications_LaunchDashboardOverlay>(get_class());
        }
    } // namespace IVRApplications_LaunchDashboardOverlay
} // namespace app::classes::types
