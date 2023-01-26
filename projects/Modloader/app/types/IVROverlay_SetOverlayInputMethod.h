#pragma once
#include <Modloader/app/structs/IVROverlay_SetOverlayInputMethod.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayInputMethod__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayInputMethod {
        inline app::IVROverlay_SetOverlayInputMethod__Class** type_info() {
            static app::IVROverlay_SetOverlayInputMethod__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_SetOverlayInputMethod__Class**)(modloader::win::memory::resolve_rva(0x0478BC58));
            }
            return cache;
        }
        inline app::IVROverlay_SetOverlayInputMethod__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayInputMethod__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayInputMethod");
        }
        inline app::IVROverlay_SetOverlayInputMethod* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayInputMethod>(get_class());
        }
    } // namespace IVROverlay_SetOverlayInputMethod
} // namespace app::classes::types
