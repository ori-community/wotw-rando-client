#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRSystem_IsTrackedDeviceConnected__Class.h>
#include <Modloader/app/structs/IVRSystem_IsTrackedDeviceConnected.h>

namespace app::classes::types {
    namespace IVRSystem_IsTrackedDeviceConnected {
        inline app::IVRSystem_IsTrackedDeviceConnected__Class** type_info = (app::IVRSystem_IsTrackedDeviceConnected__Class**)(modloader::win::memory::resolve_rva(0x047040F8));
        inline app::IVRSystem_IsTrackedDeviceConnected__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_IsTrackedDeviceConnected__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_IsTrackedDeviceConnected");
        }
        inline app::IVRSystem_IsTrackedDeviceConnected* create() {
            return il2cpp::create_object<app::IVRSystem_IsTrackedDeviceConnected>(get_class());
        }
    } // namespace IVRSystem_IsTrackedDeviceConnected
} // namespace app::classes::types
