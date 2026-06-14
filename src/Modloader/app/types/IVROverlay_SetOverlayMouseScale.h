#pragma once
#include <Modloader/app/structs/IVROverlay_SetOverlayMouseScale.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayMouseScale__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayMouseScale {
        inline app::IVROverlay_SetOverlayMouseScale__Class** type_info() {
            static app::IVROverlay_SetOverlayMouseScale__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_SetOverlayMouseScale__Class**)(modloader::win::memory::resolve_rva(0x047074D8));
            }
            return cache;
        }
        inline app::IVROverlay_SetOverlayMouseScale__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayMouseScale__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayMouseScale");
        }
        inline app::IVROverlay_SetOverlayMouseScale* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayMouseScale>(get_class());
        }
    } // namespace IVROverlay_SetOverlayMouseScale
} // namespace app::classes::types
