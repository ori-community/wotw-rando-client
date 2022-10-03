#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ETrackedDeviceProperty__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ETrackedDeviceProperty__Enum__Class** type_info;
        inline app::ETrackedDeviceProperty__Enum__Class* get_class() {
            return il2cpp::get_class<app::ETrackedDeviceProperty__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "ETrackedDeviceProperty");
        }
        inline app::ETrackedDeviceProperty__Enum* create() {
            return il2cpp::create_object<app::ETrackedDeviceProperty__Enum>(get_class());
        }
    } // namespace ETrackedDeviceProperty__Enum
} // namespace app::classes::types
