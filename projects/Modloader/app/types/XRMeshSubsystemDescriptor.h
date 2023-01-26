#pragma once
#include <Modloader/app/structs/XRMeshSubsystemDescriptor.h>
#include <Modloader/app/structs/XRMeshSubsystemDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XRMeshSubsystemDescriptor {
        inline app::XRMeshSubsystemDescriptor__Class** type_info() {
            static app::XRMeshSubsystemDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XRMeshSubsystemDescriptor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XRMeshSubsystemDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XRMeshSubsystemDescriptor__Class>(type_info(), "UnityEngine.Experimental.XR", "XRMeshSubsystemDescriptor");
        }
        inline app::XRMeshSubsystemDescriptor* create() {
            return il2cpp::create_object<app::XRMeshSubsystemDescriptor>(get_class());
        }
    } // namespace XRMeshSubsystemDescriptor
} // namespace app::classes::types
