#pragma once
#include <Modloader/app/structs/ETrackedDeviceProperty__Enum.h>
#include <Modloader/app/structs/ETrackedDeviceProperty__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ETrackedDeviceProperty__Enum {
        inline app::ETrackedDeviceProperty__Enum__Class** type_info() {
            static app::ETrackedDeviceProperty__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ETrackedDeviceProperty__Enum__Class**)(modloader::win::memory::resolve_rva(0x047104E0));
            }
            return cache;
        }
        inline app::ETrackedDeviceProperty__Enum__Class* get_class() {
            return il2cpp::get_class<app::ETrackedDeviceProperty__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "ETrackedDeviceProperty");
        }
        inline app::ETrackedDeviceProperty__Enum* create() {
            return il2cpp::create_object<app::ETrackedDeviceProperty__Enum>(get_class());
        }
    } // namespace ETrackedDeviceProperty__Enum
} // namespace app::classes::types
