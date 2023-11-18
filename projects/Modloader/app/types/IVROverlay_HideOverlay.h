#pragma once
#include <Modloader/app/structs/IVROverlay_HideOverlay.h>
#include <Modloader/app/structs/IVROverlay_HideOverlay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_HideOverlay {
        inline app::IVROverlay_HideOverlay__Class** type_info() {
            static app::IVROverlay_HideOverlay__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_HideOverlay__Class**)(modloader::win::memory::resolve_rva(0x0472D148));
            }
            return cache;
        }
        inline app::IVROverlay_HideOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_HideOverlay__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_HideOverlay");
        }
        inline app::IVROverlay_HideOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_HideOverlay>(get_class());
        }
    } // namespace IVROverlay_HideOverlay
} // namespace app::classes::types
