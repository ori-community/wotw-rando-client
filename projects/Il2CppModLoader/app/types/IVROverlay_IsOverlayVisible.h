#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_IsOverlayVisible {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_IsOverlayVisible__Class** type_info;
        inline app::IVROverlay_IsOverlayVisible__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_IsOverlayVisible__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_IsOverlayVisible");
        }
        inline app::IVROverlay_IsOverlayVisible* create() {
            return il2cpp::create_object<app::IVROverlay_IsOverlayVisible>(get_class());
        }
    } // namespace IVROverlay_IsOverlayVisible
} // namespace app::classes::types
