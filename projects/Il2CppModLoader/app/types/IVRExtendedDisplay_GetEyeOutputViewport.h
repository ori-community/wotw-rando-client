#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRExtendedDisplay_GetEyeOutputViewport {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRExtendedDisplay_GetEyeOutputViewport__Class** type_info;
        inline app::IVRExtendedDisplay_GetEyeOutputViewport__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRExtendedDisplay_GetEyeOutputViewport__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRExtendedDisplay", "_GetEyeOutputViewport");
        }
        inline app::IVRExtendedDisplay_GetEyeOutputViewport* create() {
            return il2cpp::create_object<app::IVRExtendedDisplay_GetEyeOutputViewport>(get_class());
        }
    } // namespace IVRExtendedDisplay_GetEyeOutputViewport
} // namespace app::classes::types
