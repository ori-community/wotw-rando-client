#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationsTransitionStateNameFromEnum {
        inline app::IVRApplications_GetApplicationsTransitionStateNameFromEnum__Class** type_info = (app::IVRApplications_GetApplicationsTransitionStateNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x0471AB90));
        inline app::IVRApplications_GetApplicationsTransitionStateNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationsTransitionStateNameFromEnum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationsTransitionStateNameFromEnum");
        }
        inline app::IVRApplications_GetApplicationsTransitionStateNameFromEnum* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationsTransitionStateNameFromEnum>(get_class());
        }
    } // namespace IVRApplications_GetApplicationsTransitionStateNameFromEnum
} // namespace app::classes::types
