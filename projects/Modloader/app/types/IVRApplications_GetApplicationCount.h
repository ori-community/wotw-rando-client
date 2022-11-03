#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationCount {
        inline app::IVRApplications_GetApplicationCount__Class** type_info = (app::IVRApplications_GetApplicationCount__Class**)(modloader::win::memory::resolve_rva(0x0478D2A8));
        inline app::IVRApplications_GetApplicationCount__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationCount__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationCount");
        }
        inline app::IVRApplications_GetApplicationCount* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationCount>(get_class());
        }
    } // namespace IVRApplications_GetApplicationCount
} // namespace app::classes::types
