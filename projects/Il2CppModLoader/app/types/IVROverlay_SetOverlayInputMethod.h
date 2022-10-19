#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayInputMethod {
        inline app::IVROverlay_SetOverlayInputMethod__Class** type_info = (app::IVROverlay_SetOverlayInputMethod__Class**)(modloader::win::memory::resolve_rva(0x0478BC58));
        inline app::IVROverlay_SetOverlayInputMethod__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayInputMethod__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayInputMethod");
        }
        inline app::IVROverlay_SetOverlayInputMethod* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayInputMethod>(get_class());
        }
    } // namespace IVROverlay_SetOverlayInputMethod
} // namespace app::classes::types
