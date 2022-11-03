#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ETrackedDeviceClass__Enum {
        inline app::ETrackedDeviceClass__Enum__Class** type_info = (app::ETrackedDeviceClass__Enum__Class**)(modloader::win::memory::resolve_rva(0x047248B0));
        inline app::ETrackedDeviceClass__Enum__Class* get_class() {
            return il2cpp::get_class<app::ETrackedDeviceClass__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "ETrackedDeviceClass");
        }
        inline app::ETrackedDeviceClass__Enum* create() {
            return il2cpp::create_object<app::ETrackedDeviceClass__Enum>(get_class());
        }
    } // namespace ETrackedDeviceClass__Enum
} // namespace app::classes::types
