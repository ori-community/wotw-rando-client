#pragma once
#include <Modloader/app/structs/IVROverlay_GetOverlayColor.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayColor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayColor {
        inline app::IVROverlay_GetOverlayColor__Class** type_info() {
            static app::IVROverlay_GetOverlayColor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_GetOverlayColor__Class**)(modloader::win::memory::resolve_rva(0x04750960));
            }
            return cache;
        }
        inline app::IVROverlay_GetOverlayColor__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayColor__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayColor");
        }
        inline app::IVROverlay_GetOverlayColor* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayColor>(get_class());
        }
    } // namespace IVROverlay_GetOverlayColor
} // namespace app::classes::types
