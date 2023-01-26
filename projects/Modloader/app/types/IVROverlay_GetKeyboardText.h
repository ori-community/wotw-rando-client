#pragma once
#include <Modloader/app/structs/IVROverlay_GetKeyboardText.h>
#include <Modloader/app/structs/IVROverlay_GetKeyboardText__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetKeyboardText {
        inline app::IVROverlay_GetKeyboardText__Class** type_info() {
            static app::IVROverlay_GetKeyboardText__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_GetKeyboardText__Class**)(modloader::win::memory::resolve_rva(0x0474F3A0));
            }
            return cache;
        }
        inline app::IVROverlay_GetKeyboardText__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetKeyboardText__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetKeyboardText");
        }
        inline app::IVROverlay_GetKeyboardText* create() {
            return il2cpp::create_object<app::IVROverlay_GetKeyboardText>(get_class());
        }
    } // namespace IVROverlay_GetKeyboardText
} // namespace app::classes::types
