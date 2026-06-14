#pragma once
#include <Modloader/app/structs/IVROverlay_GetOverlayTextureBounds.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTextureBounds__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayTextureBounds {
        inline app::IVROverlay_GetOverlayTextureBounds__Class** type_info() {
            static app::IVROverlay_GetOverlayTextureBounds__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_GetOverlayTextureBounds__Class**)(modloader::win::memory::resolve_rva(0x04717FC0));
            }
            return cache;
        }
        inline app::IVROverlay_GetOverlayTextureBounds__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayTextureBounds__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayTextureBounds");
        }
        inline app::IVROverlay_GetOverlayTextureBounds* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayTextureBounds>(get_class());
        }
    } // namespace IVROverlay_GetOverlayTextureBounds
} // namespace app::classes::types
