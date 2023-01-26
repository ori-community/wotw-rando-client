#pragma once
#include <Modloader/app/structs/XRPlaneSubsystemDescriptor.h>
#include <Modloader/app/structs/XRPlaneSubsystemDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XRPlaneSubsystemDescriptor {
        inline app::XRPlaneSubsystemDescriptor__Class** type_info() {
            static app::XRPlaneSubsystemDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XRPlaneSubsystemDescriptor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XRPlaneSubsystemDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XRPlaneSubsystemDescriptor__Class>(type_info(), "UnityEngine.Experimental.XR", "XRPlaneSubsystemDescriptor");
        }
        inline app::XRPlaneSubsystemDescriptor* create() {
            return il2cpp::create_object<app::XRPlaneSubsystemDescriptor>(get_class());
        }
    } // namespace XRPlaneSubsystemDescriptor
} // namespace app::classes::types
