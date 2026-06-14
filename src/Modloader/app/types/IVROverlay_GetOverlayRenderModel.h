#pragma once
#include <Modloader/app/structs/IVROverlay_GetOverlayRenderModel.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayRenderModel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayRenderModel {
        inline app::IVROverlay_GetOverlayRenderModel__Class** type_info() {
            static app::IVROverlay_GetOverlayRenderModel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_GetOverlayRenderModel__Class**)(modloader::win::memory::resolve_rva(0x04739258));
            }
            return cache;
        }
        inline app::IVROverlay_GetOverlayRenderModel__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayRenderModel__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayRenderModel");
        }
        inline app::IVROverlay_GetOverlayRenderModel* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayRenderModel>(get_class());
        }
    } // namespace IVROverlay_GetOverlayRenderModel
} // namespace app::classes::types
