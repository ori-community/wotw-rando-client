#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayRenderModel {
        inline app::IVROverlay_SetOverlayRenderModel__Class** type_info = (app::IVROverlay_SetOverlayRenderModel__Class**)(modloader::win::memory::resolve_rva(0x04779D70));
        inline app::IVROverlay_SetOverlayRenderModel__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayRenderModel__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayRenderModel");
        }
        inline app::IVROverlay_SetOverlayRenderModel* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayRenderModel>(get_class());
        }
    } // namespace IVROverlay_SetOverlayRenderModel
} // namespace app::classes::types
