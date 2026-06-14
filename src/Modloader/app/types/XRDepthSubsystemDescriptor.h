#pragma once
#include <Modloader/app/structs/XRDepthSubsystemDescriptor.h>
#include <Modloader/app/structs/XRDepthSubsystemDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XRDepthSubsystemDescriptor {
        inline app::XRDepthSubsystemDescriptor__Class** type_info() {
            static app::XRDepthSubsystemDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XRDepthSubsystemDescriptor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XRDepthSubsystemDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XRDepthSubsystemDescriptor__Class>(type_info(), "UnityEngine.Experimental.XR", "XRDepthSubsystemDescriptor");
        }
        inline app::XRDepthSubsystemDescriptor* create() {
            return il2cpp::create_object<app::XRDepthSubsystemDescriptor>(get_class());
        }
    } // namespace XRDepthSubsystemDescriptor
} // namespace app::classes::types
