#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayRenderModel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetOverlayRenderModel__Class** type_info;
        inline app::IVROverlay_GetOverlayRenderModel__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayRenderModel__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayRenderModel");
        }
        inline app::IVROverlay_GetOverlayRenderModel* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayRenderModel>(get_class());
        }
    } // namespace IVROverlay_GetOverlayRenderModel
} // namespace app::classes::types
