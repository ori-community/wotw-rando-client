#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVROverlay_ShowDashboard__Class.h>
#include <Modloader/app/structs/IVROverlay_ShowDashboard.h>

namespace app::classes::types {
    namespace IVROverlay_ShowDashboard {
        inline app::IVROverlay_ShowDashboard__Class** type_info = (app::IVROverlay_ShowDashboard__Class**)(modloader::win::memory::resolve_rva(0x04799D38));
        inline app::IVROverlay_ShowDashboard__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_ShowDashboard__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_ShowDashboard");
        }
        inline app::IVROverlay_ShowDashboard* create() {
            return il2cpp::create_object<app::IVROverlay_ShowDashboard>(get_class());
        }
    } // namespace IVROverlay_ShowDashboard
} // namespace app::classes::types
