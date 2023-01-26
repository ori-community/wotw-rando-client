#pragma once
#include <Modloader/app/structs/IVROverlay_SetOverlayRaw.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayRaw__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayRaw {
        inline app::IVROverlay_SetOverlayRaw__Class** type_info() {
            static app::IVROverlay_SetOverlayRaw__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_SetOverlayRaw__Class**)(modloader::win::memory::resolve_rva(0x0477F1B0));
            }
            return cache;
        }
        inline app::IVROverlay_SetOverlayRaw__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayRaw__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayRaw");
        }
        inline app::IVROverlay_SetOverlayRaw* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayRaw>(get_class());
        }
    } // namespace IVROverlay_SetOverlayRaw
} // namespace app::classes::types
