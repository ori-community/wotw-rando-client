#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRExtendedDisplay_GetEyeOutputViewport {
        inline app::IVRExtendedDisplay_GetEyeOutputViewport__Class** type_info = (app::IVRExtendedDisplay_GetEyeOutputViewport__Class**)(modloader::win::memory::resolve_rva(0x0470A300));
        inline app::IVRExtendedDisplay_GetEyeOutputViewport__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRExtendedDisplay_GetEyeOutputViewport__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRExtendedDisplay", "_GetEyeOutputViewport");
        }
        inline app::IVRExtendedDisplay_GetEyeOutputViewport* create() {
            return il2cpp::create_object<app::IVRExtendedDisplay_GetEyeOutputViewport>(get_class());
        }
    } // namespace IVRExtendedDisplay_GetEyeOutputViewport
} // namespace app::classes::types
