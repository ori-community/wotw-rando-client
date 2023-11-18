#pragma once
#include <Modloader/app/structs/IVROverlay_HandleControllerOverlayInteractionAsMouse.h>
#include <Modloader/app/structs/IVROverlay_HandleControllerOverlayInteractionAsMouse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_HandleControllerOverlayInteractionAsMouse {
        inline app::IVROverlay_HandleControllerOverlayInteractionAsMouse__Class** type_info() {
            static app::IVROverlay_HandleControllerOverlayInteractionAsMouse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_HandleControllerOverlayInteractionAsMouse__Class**)(modloader::win::memory::resolve_rva(0x0474F660));
            }
            return cache;
        }
        inline app::IVROverlay_HandleControllerOverlayInteractionAsMouse__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_HandleControllerOverlayInteractionAsMouse__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_HandleControllerOverlayInteractionAsMouse");
        }
        inline app::IVROverlay_HandleControllerOverlayInteractionAsMouse* create() {
            return il2cpp::create_object<app::IVROverlay_HandleControllerOverlayInteractionAsMouse>(get_class());
        }
    } // namespace IVROverlay_HandleControllerOverlayInteractionAsMouse
} // namespace app::classes::types
