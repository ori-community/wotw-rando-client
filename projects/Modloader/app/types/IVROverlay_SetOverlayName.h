#pragma once
#include <Modloader/app/structs/IVROverlay_SetOverlayName.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayName {
        inline app::IVROverlay_SetOverlayName__Class** type_info() {
            static app::IVROverlay_SetOverlayName__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_SetOverlayName__Class**)(modloader::win::memory::resolve_rva(0x0474B980));
            }
            return cache;
        }
        inline app::IVROverlay_SetOverlayName__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayName__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayName");
        }
        inline app::IVROverlay_SetOverlayName* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayName>(get_class());
        }
    } // namespace IVROverlay_SetOverlayName
} // namespace app::classes::types
