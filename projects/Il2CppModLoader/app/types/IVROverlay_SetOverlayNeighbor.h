#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayNeighbor {
        inline app::IVROverlay_SetOverlayNeighbor__Class** type_info = (app::IVROverlay_SetOverlayNeighbor__Class**)(modloader::win::memory::resolve_rva(0x047362E0));
        inline app::IVROverlay_SetOverlayNeighbor__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayNeighbor__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayNeighbor");
        }
        inline app::IVROverlay_SetOverlayNeighbor* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayNeighbor>(get_class());
        }
    } // namespace IVROverlay_SetOverlayNeighbor
} // namespace app::classes::types
