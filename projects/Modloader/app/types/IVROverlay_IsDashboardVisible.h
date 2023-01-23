#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVROverlay_IsDashboardVisible__Class.h>
#include <Modloader/app/structs/IVROverlay_IsDashboardVisible.h>

namespace app::classes::types {
    namespace IVROverlay_IsDashboardVisible {
        inline app::IVROverlay_IsDashboardVisible__Class** type_info = (app::IVROverlay_IsDashboardVisible__Class**)(modloader::win::memory::resolve_rva(0x04725910));
        inline app::IVROverlay_IsDashboardVisible__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_IsDashboardVisible__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_IsDashboardVisible");
        }
        inline app::IVROverlay_IsDashboardVisible* create() {
            return il2cpp::create_object<app::IVROverlay_IsDashboardVisible>(get_class());
        }
    } // namespace IVROverlay_IsDashboardVisible
} // namespace app::classes::types
