#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_GetTrackedDeviceClass {
        inline app::IVRSystem_GetTrackedDeviceClass__Class** type_info = (app::IVRSystem_GetTrackedDeviceClass__Class**)(modloader::win::memory::resolve_rva(0x04702450));
        inline app::IVRSystem_GetTrackedDeviceClass__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetTrackedDeviceClass__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetTrackedDeviceClass");
        }
        inline app::IVRSystem_GetTrackedDeviceClass* create() {
            return il2cpp::create_object<app::IVRSystem_GetTrackedDeviceClass>(get_class());
        }
    } // namespace IVRSystem_GetTrackedDeviceClass
} // namespace app::classes::types
