#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayRenderModel {
        inline app::IVROverlay_GetOverlayRenderModel__Class** type_info = (app::IVROverlay_GetOverlayRenderModel__Class**)(modloader::win::memory::resolve_rva(0x04739258));
        inline app::IVROverlay_GetOverlayRenderModel__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayRenderModel__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayRenderModel");
        }
        inline app::IVROverlay_GetOverlayRenderModel* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayRenderModel>(get_class());
        }
    } // namespace IVROverlay_GetOverlayRenderModel
} // namespace app::classes::types
