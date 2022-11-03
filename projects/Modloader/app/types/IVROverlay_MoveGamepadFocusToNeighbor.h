#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_MoveGamepadFocusToNeighbor {
        inline app::IVROverlay_MoveGamepadFocusToNeighbor__Class** type_info = (app::IVROverlay_MoveGamepadFocusToNeighbor__Class**)(modloader::win::memory::resolve_rva(0x04782E88));
        inline app::IVROverlay_MoveGamepadFocusToNeighbor__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_MoveGamepadFocusToNeighbor__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_MoveGamepadFocusToNeighbor");
        }
        inline app::IVROverlay_MoveGamepadFocusToNeighbor* create() {
            return il2cpp::create_object<app::IVROverlay_MoveGamepadFocusToNeighbor>(get_class());
        }
    } // namespace IVROverlay_MoveGamepadFocusToNeighbor
} // namespace app::classes::types
