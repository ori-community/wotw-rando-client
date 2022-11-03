#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_IsHoverTargetOverlay {
        inline app::IVROverlay_IsHoverTargetOverlay__Class** type_info = (app::IVROverlay_IsHoverTargetOverlay__Class**)(modloader::win::memory::resolve_rva(0x0472C700));
        inline app::IVROverlay_IsHoverTargetOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_IsHoverTargetOverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_IsHoverTargetOverlay");
        }
        inline app::IVROverlay_IsHoverTargetOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_IsHoverTargetOverlay>(get_class());
        }
    } // namespace IVROverlay_IsHoverTargetOverlay
} // namespace app::classes::types
