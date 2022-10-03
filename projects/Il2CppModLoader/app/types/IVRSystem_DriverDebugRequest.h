#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_DriverDebugRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_DriverDebugRequest__Class** type_info;
        inline app::IVRSystem_DriverDebugRequest__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_DriverDebugRequest__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_DriverDebugRequest");
        }
        inline app::IVRSystem_DriverDebugRequest* create() {
            return il2cpp::create_object<app::IVRSystem_DriverDebugRequest>(get_class());
        }
    } // namespace IVRSystem_DriverDebugRequest
} // namespace app::classes::types
