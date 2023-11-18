#pragma once
#include <Modloader/app/structs/IVROverlay_HideKeyboard.h>
#include <Modloader/app/structs/IVROverlay_HideKeyboard__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_HideKeyboard {
        inline app::IVROverlay_HideKeyboard__Class** type_info() {
            static app::IVROverlay_HideKeyboard__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_HideKeyboard__Class**)(modloader::win::memory::resolve_rva(0x04733CA0));
            }
            return cache;
        }
        inline app::IVROverlay_HideKeyboard__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_HideKeyboard__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_HideKeyboard");
        }
        inline app::IVROverlay_HideKeyboard* create() {
            return il2cpp::create_object<app::IVROverlay_HideKeyboard>(get_class());
        }
    } // namespace IVROverlay_HideKeyboard
} // namespace app::classes::types
