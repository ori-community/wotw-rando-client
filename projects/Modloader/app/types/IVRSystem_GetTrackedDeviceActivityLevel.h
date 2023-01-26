#pragma once
#include <Modloader/app/structs/IVRSystem_GetTrackedDeviceActivityLevel.h>
#include <Modloader/app/structs/IVRSystem_GetTrackedDeviceActivityLevel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetTrackedDeviceActivityLevel {
        inline app::IVRSystem_GetTrackedDeviceActivityLevel__Class** type_info() {
            static app::IVRSystem_GetTrackedDeviceActivityLevel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_GetTrackedDeviceActivityLevel__Class**)(modloader::win::memory::resolve_rva(0x04736180));
            }
            return cache;
        }
        inline app::IVRSystem_GetTrackedDeviceActivityLevel__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetTrackedDeviceActivityLevel__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetTrackedDeviceActivityLevel");
        }
        inline app::IVRSystem_GetTrackedDeviceActivityLevel* create() {
            return il2cpp::create_object<app::IVRSystem_GetTrackedDeviceActivityLevel>(get_class());
        }
    } // namespace IVRSystem_GetTrackedDeviceActivityLevel
} // namespace app::classes::types
