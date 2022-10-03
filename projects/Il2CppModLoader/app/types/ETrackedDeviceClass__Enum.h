#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ETrackedDeviceClass__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ETrackedDeviceClass__Enum__Class** type_info;
        inline app::ETrackedDeviceClass__Enum__Class* get_class() {
            return il2cpp::get_class<app::ETrackedDeviceClass__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "ETrackedDeviceClass");
        }
        inline app::ETrackedDeviceClass__Enum* create() {
            return il2cpp::create_object<app::ETrackedDeviceClass__Enum>(get_class());
        }
    } // namespace ETrackedDeviceClass__Enum
} // namespace app::classes::types
