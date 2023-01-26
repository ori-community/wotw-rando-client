#pragma once
#include <Modloader/app/structs/IVROverlay_SetOverlayTransformAbsolute.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayTransformAbsolute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayTransformAbsolute {
        inline app::IVROverlay_SetOverlayTransformAbsolute__Class** type_info() {
            static app::IVROverlay_SetOverlayTransformAbsolute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_SetOverlayTransformAbsolute__Class**)(modloader::win::memory::resolve_rva(0x04715F68));
            }
            return cache;
        }
        inline app::IVROverlay_SetOverlayTransformAbsolute__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayTransformAbsolute__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayTransformAbsolute");
        }
        inline app::IVROverlay_SetOverlayTransformAbsolute* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayTransformAbsolute>(get_class());
        }
    } // namespace IVROverlay_SetOverlayTransformAbsolute
} // namespace app::classes::types
