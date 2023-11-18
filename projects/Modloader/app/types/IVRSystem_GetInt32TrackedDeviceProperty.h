#pragma once
#include <Modloader/app/structs/IVRSystem_GetInt32TrackedDeviceProperty.h>
#include <Modloader/app/structs/IVRSystem_GetInt32TrackedDeviceProperty__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetInt32TrackedDeviceProperty {
        inline app::IVRSystem_GetInt32TrackedDeviceProperty__Class** type_info() {
            static app::IVRSystem_GetInt32TrackedDeviceProperty__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_GetInt32TrackedDeviceProperty__Class**)(modloader::win::memory::resolve_rva(0x0471DDE0));
            }
            return cache;
        }
        inline app::IVRSystem_GetInt32TrackedDeviceProperty__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetInt32TrackedDeviceProperty__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetInt32TrackedDeviceProperty");
        }
        inline app::IVRSystem_GetInt32TrackedDeviceProperty* create() {
            return il2cpp::create_object<app::IVRSystem_GetInt32TrackedDeviceProperty>(get_class());
        }
    } // namespace IVRSystem_GetInt32TrackedDeviceProperty
} // namespace app::classes::types
