#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlaySortOrder {
        inline app::IVROverlay_GetOverlaySortOrder__Class** type_info = (app::IVROverlay_GetOverlaySortOrder__Class**)(modloader::win::memory::resolve_rva(0x04782678));
        inline app::IVROverlay_GetOverlaySortOrder__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlaySortOrder__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlaySortOrder");
        }
        inline app::IVROverlay_GetOverlaySortOrder* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlaySortOrder>(get_class());
        }
    } // namespace IVROverlay_GetOverlaySortOrder
} // namespace app::classes::types
