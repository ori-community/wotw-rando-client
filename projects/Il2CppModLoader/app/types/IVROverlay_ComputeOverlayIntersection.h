#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_ComputeOverlayIntersection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_ComputeOverlayIntersection__Class** type_info;
        inline app::IVROverlay_ComputeOverlayIntersection__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_ComputeOverlayIntersection__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_ComputeOverlayIntersection");
        }
        inline app::IVROverlay_ComputeOverlayIntersection* create() {
            return il2cpp::create_object<app::IVROverlay_ComputeOverlayIntersection>(get_class());
        }
    } // namespace IVROverlay_ComputeOverlayIntersection
} // namespace app::classes::types
