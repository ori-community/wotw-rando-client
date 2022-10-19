#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_GetKeyboardText {
        inline app::IVROverlay_GetKeyboardText__Class** type_info = (app::IVROverlay_GetKeyboardText__Class**)(modloader::win::memory::resolve_rva(0x0474F3A0));
        inline app::IVROverlay_GetKeyboardText__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetKeyboardText__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetKeyboardText");
        }
        inline app::IVROverlay_GetKeyboardText* create() {
            return il2cpp::create_object<app::IVROverlay_GetKeyboardText>(get_class());
        }
    } // namespace IVROverlay_GetKeyboardText
} // namespace app::classes::types
