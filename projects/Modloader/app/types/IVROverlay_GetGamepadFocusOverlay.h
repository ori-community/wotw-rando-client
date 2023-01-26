#pragma once
#include <Modloader/app/structs/IVROverlay_GetGamepadFocusOverlay.h>
#include <Modloader/app/structs/IVROverlay_GetGamepadFocusOverlay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetGamepadFocusOverlay {
        inline app::IVROverlay_GetGamepadFocusOverlay__Class** type_info() {
            static app::IVROverlay_GetGamepadFocusOverlay__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_GetGamepadFocusOverlay__Class**)(modloader::win::memory::resolve_rva(0x0471D010));
            }
            return cache;
        }
        inline app::IVROverlay_GetGamepadFocusOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetGamepadFocusOverlay__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetGamepadFocusOverlay");
        }
        inline app::IVROverlay_GetGamepadFocusOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_GetGamepadFocusOverlay>(get_class());
        }
    } // namespace IVROverlay_GetGamepadFocusOverlay
} // namespace app::classes::types
