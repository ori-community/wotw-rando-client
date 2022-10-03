#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_HandleControllerOverlayInteractionAsMouse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_HandleControllerOverlayInteractionAsMouse__Class** type_info;
        inline app::IVROverlay_HandleControllerOverlayInteractionAsMouse__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_HandleControllerOverlayInteractionAsMouse__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_HandleControllerOverlayInteractionAsMouse");
        }
        inline app::IVROverlay_HandleControllerOverlayInteractionAsMouse* create() {
            return il2cpp::create_object<app::IVROverlay_HandleControllerOverlayInteractionAsMouse>(get_class());
        }
    } // namespace IVROverlay_HandleControllerOverlayInteractionAsMouse
} // namespace app::classes::types
