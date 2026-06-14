#pragma once
#include <Modloader/app/structs/IVROverlay_ComputeOverlayIntersection.h>
#include <Modloader/app/structs/IVROverlay_ComputeOverlayIntersection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_ComputeOverlayIntersection {
        inline app::IVROverlay_ComputeOverlayIntersection__Class** type_info() {
            static app::IVROverlay_ComputeOverlayIntersection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_ComputeOverlayIntersection__Class**)(modloader::win::memory::resolve_rva(0x04750428));
            }
            return cache;
        }
        inline app::IVROverlay_ComputeOverlayIntersection__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_ComputeOverlayIntersection__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_ComputeOverlayIntersection");
        }
        inline app::IVROverlay_ComputeOverlayIntersection* create() {
            return il2cpp::create_object<app::IVROverlay_ComputeOverlayIntersection>(get_class());
        }
    } // namespace IVROverlay_ComputeOverlayIntersection
} // namespace app::classes::types
