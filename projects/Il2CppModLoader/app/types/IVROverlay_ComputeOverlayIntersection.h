#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_ComputeOverlayIntersection {
        inline app::IVROverlay_ComputeOverlayIntersection__Class** type_info = (app::IVROverlay_ComputeOverlayIntersection__Class**)(modloader::win::memory::resolve_rva(0x04750428));
        inline app::IVROverlay_ComputeOverlayIntersection__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_ComputeOverlayIntersection__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_ComputeOverlayIntersection");
        }
        inline app::IVROverlay_ComputeOverlayIntersection* create() {
            return il2cpp::create_object<app::IVROverlay_ComputeOverlayIntersection>(get_class());
        }
    } // namespace IVROverlay_ComputeOverlayIntersection
} // namespace app::classes::types
