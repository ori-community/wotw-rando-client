#pragma once
#include <Modloader/app/structs/IVRSystem_GetMatrix34TrackedDeviceProperty.h>
#include <Modloader/app/structs/IVRSystem_GetMatrix34TrackedDeviceProperty__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetMatrix34TrackedDeviceProperty {
        inline app::IVRSystem_GetMatrix34TrackedDeviceProperty__Class** type_info() {
            static app::IVRSystem_GetMatrix34TrackedDeviceProperty__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_GetMatrix34TrackedDeviceProperty__Class**)(modloader::win::memory::resolve_rva(0x0474F8F8));
            }
            return cache;
        }
        inline app::IVRSystem_GetMatrix34TrackedDeviceProperty__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetMatrix34TrackedDeviceProperty__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetMatrix34TrackedDeviceProperty");
        }
        inline app::IVRSystem_GetMatrix34TrackedDeviceProperty* create() {
            return il2cpp::create_object<app::IVRSystem_GetMatrix34TrackedDeviceProperty>(get_class());
        }
    } // namespace IVRSystem_GetMatrix34TrackedDeviceProperty
} // namespace app::classes::types
