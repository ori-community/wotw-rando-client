#pragma once
#include <Modloader/app/structs/IVROverlay_GetOverlayTexture.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTexture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayTexture {
        inline app::IVROverlay_GetOverlayTexture__Class** type_info() {
            static app::IVROverlay_GetOverlayTexture__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_GetOverlayTexture__Class**)(modloader::win::memory::resolve_rva(0x0478B278));
            }
            return cache;
        }
        inline app::IVROverlay_GetOverlayTexture__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayTexture__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayTexture");
        }
        inline app::IVROverlay_GetOverlayTexture* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayTexture>(get_class());
        }
    } // namespace IVROverlay_GetOverlayTexture
} // namespace app::classes::types
