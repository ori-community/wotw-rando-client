#pragma once
#include <Modloader/app/structs/IVROverlay_GetOverlayFlag.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayFlag__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayFlag {
        inline app::IVROverlay_GetOverlayFlag__Class** type_info() {
            static app::IVROverlay_GetOverlayFlag__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_GetOverlayFlag__Class**)(modloader::win::memory::resolve_rva(0x04788B50));
            }
            return cache;
        }
        inline app::IVROverlay_GetOverlayFlag__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayFlag__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayFlag");
        }
        inline app::IVROverlay_GetOverlayFlag* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayFlag>(get_class());
        }
    } // namespace IVROverlay_GetOverlayFlag
} // namespace app::classes::types
