#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVROverlay_GetPrimaryDashboardDevice__Class.h>
#include <Modloader/app/structs/IVROverlay_GetPrimaryDashboardDevice.h>

namespace app::classes::types {
    namespace IVROverlay_GetPrimaryDashboardDevice {
        inline app::IVROverlay_GetPrimaryDashboardDevice__Class** type_info = (app::IVROverlay_GetPrimaryDashboardDevice__Class**)(modloader::win::memory::resolve_rva(0x0470BF50));
        inline app::IVROverlay_GetPrimaryDashboardDevice__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetPrimaryDashboardDevice__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetPrimaryDashboardDevice");
        }
        inline app::IVROverlay_GetPrimaryDashboardDevice* create() {
            return il2cpp::create_object<app::IVROverlay_GetPrimaryDashboardDevice>(get_class());
        }
    } // namespace IVROverlay_GetPrimaryDashboardDevice
} // namespace app::classes::types
