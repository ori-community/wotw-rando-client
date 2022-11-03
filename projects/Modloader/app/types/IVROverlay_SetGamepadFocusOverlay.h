#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_SetGamepadFocusOverlay {
        inline app::IVROverlay_SetGamepadFocusOverlay__Class** type_info = (app::IVROverlay_SetGamepadFocusOverlay__Class**)(modloader::win::memory::resolve_rva(0x04786948));
        inline app::IVROverlay_SetGamepadFocusOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetGamepadFocusOverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetGamepadFocusOverlay");
        }
        inline app::IVROverlay_SetGamepadFocusOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_SetGamepadFocusOverlay>(get_class());
        }
    } // namespace IVROverlay_SetGamepadFocusOverlay
} // namespace app::classes::types
