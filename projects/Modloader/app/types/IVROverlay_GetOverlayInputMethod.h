#pragma once
#include <Modloader/app/structs/IVROverlay_GetOverlayInputMethod.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayInputMethod__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayInputMethod {
        inline app::IVROverlay_GetOverlayInputMethod__Class** type_info() {
            static app::IVROverlay_GetOverlayInputMethod__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_GetOverlayInputMethod__Class**)(modloader::win::memory::resolve_rva(0x04795DF0));
            }
            return cache;
        }
        inline app::IVROverlay_GetOverlayInputMethod__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayInputMethod__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayInputMethod");
        }
        inline app::IVROverlay_GetOverlayInputMethod* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayInputMethod>(get_class());
        }
    } // namespace IVROverlay_GetOverlayInputMethod
} // namespace app::classes::types
