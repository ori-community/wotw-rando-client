#pragma once
#include <Modloader/app/structs/IVROverlay_SetKeyboardPositionForOverlay.h>
#include <Modloader/app/structs/IVROverlay_SetKeyboardPositionForOverlay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetKeyboardPositionForOverlay {
        inline app::IVROverlay_SetKeyboardPositionForOverlay__Class** type_info() {
            static app::IVROverlay_SetKeyboardPositionForOverlay__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_SetKeyboardPositionForOverlay__Class**)(modloader::win::memory::resolve_rva(0x0471AFB0));
            }
            return cache;
        }
        inline app::IVROverlay_SetKeyboardPositionForOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetKeyboardPositionForOverlay__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetKeyboardPositionForOverlay");
        }
        inline app::IVROverlay_SetKeyboardPositionForOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_SetKeyboardPositionForOverlay>(get_class());
        }
    } // namespace IVROverlay_SetKeyboardPositionForOverlay
} // namespace app::classes::types
