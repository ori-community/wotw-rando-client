#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XRMeshSubsystemDescriptor {
        namespace {
            app::XRMeshSubsystemDescriptor__Class* type_info_ref = nullptr;
        }
        app::XRMeshSubsystemDescriptor__Class** type_info = &type_info_ref;
        inline app::XRMeshSubsystemDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XRMeshSubsystemDescriptor__Class>(type_info, "UnityEngine.Experimental.XR", "XRMeshSubsystemDescriptor");
        }
        inline app::XRMeshSubsystemDescriptor* create() {
            return il2cpp::create_object<app::XRMeshSubsystemDescriptor>(get_class());
        }
    } // namespace XRMeshSubsystemDescriptor
} // namespace app::classes::types
