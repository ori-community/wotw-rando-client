#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_DriverDebugRequest {
        inline app::IVRSystem_DriverDebugRequest__Class** type_info = (app::IVRSystem_DriverDebugRequest__Class**)(modloader::win::memory::resolve_rva(0x04703118));
        inline app::IVRSystem_DriverDebugRequest__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_DriverDebugRequest__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_DriverDebugRequest");
        }
        inline app::IVRSystem_DriverDebugRequest* create() {
            return il2cpp::create_object<app::IVRSystem_DriverDebugRequest>(get_class());
        }
    } // namespace IVRSystem_DriverDebugRequest
} // namespace app::classes::types
