#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationAutoLaunch {
        inline app::IVRApplications_GetApplicationAutoLaunch__Class** type_info = (app::IVRApplications_GetApplicationAutoLaunch__Class**)(modloader::win::memory::resolve_rva(0x04701F18));
        inline app::IVRApplications_GetApplicationAutoLaunch__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationAutoLaunch__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationAutoLaunch");
        }
        inline app::IVRApplications_GetApplicationAutoLaunch* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationAutoLaunch>(get_class());
        }
    } // namespace IVRApplications_GetApplicationAutoLaunch
} // namespace app::classes::types
