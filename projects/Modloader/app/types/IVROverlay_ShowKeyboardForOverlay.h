#pragma once
#include <Modloader/app/structs/IVROverlay_ShowKeyboardForOverlay.h>
#include <Modloader/app/structs/IVROverlay_ShowKeyboardForOverlay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_ShowKeyboardForOverlay {
        inline app::IVROverlay_ShowKeyboardForOverlay__Class** type_info() {
            static app::IVROverlay_ShowKeyboardForOverlay__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_ShowKeyboardForOverlay__Class**)(modloader::win::memory::resolve_rva(0x04725018));
            }
            return cache;
        }
        inline app::IVROverlay_ShowKeyboardForOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_ShowKeyboardForOverlay__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_ShowKeyboardForOverlay");
        }
        inline app::IVROverlay_ShowKeyboardForOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_ShowKeyboardForOverlay>(get_class());
        }
    } // namespace IVROverlay_ShowKeyboardForOverlay
} // namespace app::classes::types
