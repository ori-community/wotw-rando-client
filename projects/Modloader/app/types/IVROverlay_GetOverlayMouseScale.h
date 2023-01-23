#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayMouseScale__Class.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayMouseScale.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayMouseScale {
        inline app::IVROverlay_GetOverlayMouseScale__Class** type_info = (app::IVROverlay_GetOverlayMouseScale__Class**)(modloader::win::memory::resolve_rva(0x04700CB0));
        inline app::IVROverlay_GetOverlayMouseScale__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayMouseScale__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayMouseScale");
        }
        inline app::IVROverlay_GetOverlayMouseScale* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayMouseScale>(get_class());
        }
    } // namespace IVROverlay_GetOverlayMouseScale
} // namespace app::classes::types
