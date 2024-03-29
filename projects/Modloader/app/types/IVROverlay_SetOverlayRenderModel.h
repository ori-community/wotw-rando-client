#pragma once
#include <Modloader/app/structs/IVROverlay_SetOverlayRenderModel.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayRenderModel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayRenderModel {
        inline app::IVROverlay_SetOverlayRenderModel__Class** type_info() {
            static app::IVROverlay_SetOverlayRenderModel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_SetOverlayRenderModel__Class**)(modloader::win::memory::resolve_rva(0x04779D70));
            }
            return cache;
        }
        inline app::IVROverlay_SetOverlayRenderModel__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayRenderModel__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayRenderModel");
        }
        inline app::IVROverlay_SetOverlayRenderModel* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayRenderModel>(get_class());
        }
    } // namespace IVROverlay_SetOverlayRenderModel
} // namespace app::classes::types
