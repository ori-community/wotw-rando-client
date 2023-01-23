#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVROverlay_CreateDashboardOverlay__Class.h>
#include <Modloader/app/structs/IVROverlay_CreateDashboardOverlay.h>

namespace app::classes::types {
    namespace IVROverlay_CreateDashboardOverlay {
        inline app::IVROverlay_CreateDashboardOverlay__Class** type_info = (app::IVROverlay_CreateDashboardOverlay__Class**)(modloader::win::memory::resolve_rva(0x04758140));
        inline app::IVROverlay_CreateDashboardOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_CreateDashboardOverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_CreateDashboardOverlay");
        }
        inline app::IVROverlay_CreateDashboardOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_CreateDashboardOverlay>(get_class());
        }
    } // namespace IVROverlay_CreateDashboardOverlay
} // namespace app::classes::types
