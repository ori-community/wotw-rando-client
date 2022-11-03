#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications_LaunchDashboardOverlay {
        inline app::IVRApplications_LaunchDashboardOverlay__Class** type_info = (app::IVRApplications_LaunchDashboardOverlay__Class**)(modloader::win::memory::resolve_rva(0x04784570));
        inline app::IVRApplications_LaunchDashboardOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_LaunchDashboardOverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_LaunchDashboardOverlay");
        }
        inline app::IVRApplications_LaunchDashboardOverlay* create() {
            return il2cpp::create_object<app::IVRApplications_LaunchDashboardOverlay>(get_class());
        }
    } // namespace IVRApplications_LaunchDashboardOverlay
} // namespace app::classes::types
