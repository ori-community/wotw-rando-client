#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRExtendedDisplay_GetWindowBounds {
        inline app::IVRExtendedDisplay_GetWindowBounds__Class** type_info = (app::IVRExtendedDisplay_GetWindowBounds__Class**)(modloader::win::memory::resolve_rva(0x04722560));
        inline app::IVRExtendedDisplay_GetWindowBounds__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRExtendedDisplay_GetWindowBounds__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRExtendedDisplay", "_GetWindowBounds");
        }
        inline app::IVRExtendedDisplay_GetWindowBounds* create() {
            return il2cpp::create_object<app::IVRExtendedDisplay_GetWindowBounds>(get_class());
        }
    } // namespace IVRExtendedDisplay_GetWindowBounds
} // namespace app::classes::types
