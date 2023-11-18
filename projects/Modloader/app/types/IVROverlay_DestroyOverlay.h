#pragma once
#include <Modloader/app/structs/IVROverlay_DestroyOverlay.h>
#include <Modloader/app/structs/IVROverlay_DestroyOverlay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_DestroyOverlay {
        inline app::IVROverlay_DestroyOverlay__Class** type_info() {
            static app::IVROverlay_DestroyOverlay__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_DestroyOverlay__Class**)(modloader::win::memory::resolve_rva(0x0474D7B8));
            }
            return cache;
        }
        inline app::IVROverlay_DestroyOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_DestroyOverlay__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_DestroyOverlay");
        }
        inline app::IVROverlay_DestroyOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_DestroyOverlay>(get_class());
        }
    } // namespace IVROverlay_DestroyOverlay
} // namespace app::classes::types
