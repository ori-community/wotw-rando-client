#pragma once
#include <Modloader/app/structs/IVROverlay_GetOverlayFlags.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayFlags__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayFlags {
        inline app::IVROverlay_GetOverlayFlags__Class** type_info() {
            static app::IVROverlay_GetOverlayFlags__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_GetOverlayFlags__Class**)(modloader::win::memory::resolve_rva(0x04788028));
            }
            return cache;
        }
        inline app::IVROverlay_GetOverlayFlags__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayFlags__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayFlags");
        }
        inline app::IVROverlay_GetOverlayFlags* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayFlags>(get_class());
        }
    } // namespace IVROverlay_GetOverlayFlags
} // namespace app::classes::types
