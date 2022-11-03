#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_IsActiveDashboardOverlay {
        inline app::IVROverlay_IsActiveDashboardOverlay__Class** type_info = (app::IVROverlay_IsActiveDashboardOverlay__Class**)(modloader::win::memory::resolve_rva(0x04737598));
        inline app::IVROverlay_IsActiveDashboardOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_IsActiveDashboardOverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_IsActiveDashboardOverlay");
        }
        inline app::IVROverlay_IsActiveDashboardOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_IsActiveDashboardOverlay>(get_class());
        }
    } // namespace IVROverlay_IsActiveDashboardOverlay
} // namespace app::classes::types
