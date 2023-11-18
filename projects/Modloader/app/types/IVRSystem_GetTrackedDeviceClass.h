#pragma once
#include <Modloader/app/structs/IVRSystem_GetTrackedDeviceClass.h>
#include <Modloader/app/structs/IVRSystem_GetTrackedDeviceClass__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetTrackedDeviceClass {
        inline app::IVRSystem_GetTrackedDeviceClass__Class** type_info() {
            static app::IVRSystem_GetTrackedDeviceClass__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_GetTrackedDeviceClass__Class**)(modloader::win::memory::resolve_rva(0x04702450));
            }
            return cache;
        }
        inline app::IVRSystem_GetTrackedDeviceClass__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetTrackedDeviceClass__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetTrackedDeviceClass");
        }
        inline app::IVRSystem_GetTrackedDeviceClass* create() {
            return il2cpp::create_object<app::IVRSystem_GetTrackedDeviceClass>(get_class());
        }
    } // namespace IVRSystem_GetTrackedDeviceClass
} // namespace app::classes::types
