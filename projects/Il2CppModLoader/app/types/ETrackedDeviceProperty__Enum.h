#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ETrackedDeviceProperty__Enum {
        inline app::ETrackedDeviceProperty__Enum__Class** type_info = (app::ETrackedDeviceProperty__Enum__Class**)(modloader::win::memory::resolve_rva(0x047104E0));
        inline app::ETrackedDeviceProperty__Enum__Class* get_class() {
            return il2cpp::get_class<app::ETrackedDeviceProperty__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "ETrackedDeviceProperty");
        }
        inline app::ETrackedDeviceProperty__Enum* create() {
            return il2cpp::create_object<app::ETrackedDeviceProperty__Enum>(get_class());
        }
    } // namespace ETrackedDeviceProperty__Enum
} // namespace app::classes::types
