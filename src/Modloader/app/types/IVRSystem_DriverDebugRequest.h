#pragma once
#include <Modloader/app/structs/IVRSystem_DriverDebugRequest.h>
#include <Modloader/app/structs/IVRSystem_DriverDebugRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_DriverDebugRequest {
        inline app::IVRSystem_DriverDebugRequest__Class** type_info() {
            static app::IVRSystem_DriverDebugRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_DriverDebugRequest__Class**)(modloader::win::memory::resolve_rva(0x04703118));
            }
            return cache;
        }
        inline app::IVRSystem_DriverDebugRequest__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_DriverDebugRequest__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_DriverDebugRequest");
        }
        inline app::IVRSystem_DriverDebugRequest* create() {
            return il2cpp::create_object<app::IVRSystem_DriverDebugRequest>(get_class());
        }
    } // namespace IVRSystem_DriverDebugRequest
} // namespace app::classes::types
