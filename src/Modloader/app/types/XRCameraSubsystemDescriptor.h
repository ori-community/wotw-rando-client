#pragma once
#include <Modloader/app/structs/XRCameraSubsystemDescriptor.h>
#include <Modloader/app/structs/XRCameraSubsystemDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XRCameraSubsystemDescriptor {
        inline app::XRCameraSubsystemDescriptor__Class** type_info() {
            static app::XRCameraSubsystemDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XRCameraSubsystemDescriptor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XRCameraSubsystemDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XRCameraSubsystemDescriptor__Class>(type_info(), "UnityEngine.Experimental.XR", "XRCameraSubsystemDescriptor");
        }
        inline app::XRCameraSubsystemDescriptor* create() {
            return il2cpp::create_object<app::XRCameraSubsystemDescriptor>(get_class());
        }
    } // namespace XRCameraSubsystemDescriptor
} // namespace app::classes::types
