#pragma once
#include <Modloader/app/structs/IVROverlay_SetOverlayFlag.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayFlag__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayFlag {
        inline app::IVROverlay_SetOverlayFlag__Class** type_info() {
            static app::IVROverlay_SetOverlayFlag__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_SetOverlayFlag__Class**)(modloader::win::memory::resolve_rva(0x04780B50));
            }
            return cache;
        }
        inline app::IVROverlay_SetOverlayFlag__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayFlag__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayFlag");
        }
        inline app::IVROverlay_SetOverlayFlag* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayFlag>(get_class());
        }
    } // namespace IVROverlay_SetOverlayFlag
} // namespace app::classes::types
