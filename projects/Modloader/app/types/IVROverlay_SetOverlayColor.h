#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayColor__Class.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayColor.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayColor {
        inline app::IVROverlay_SetOverlayColor__Class** type_info = (app::IVROverlay_SetOverlayColor__Class**)(modloader::win::memory::resolve_rva(0x0471C2D0));
        inline app::IVROverlay_SetOverlayColor__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayColor__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayColor");
        }
        inline app::IVROverlay_SetOverlayColor* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayColor>(get_class());
        }
    } // namespace IVROverlay_SetOverlayColor
} // namespace app::classes::types
