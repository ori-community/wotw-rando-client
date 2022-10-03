#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XRPlaneSubsystemDescriptor {
        namespace {
            app::XRPlaneSubsystemDescriptor__Class* type_info_ref = nullptr;
        }
        app::XRPlaneSubsystemDescriptor__Class** type_info = &type_info_ref;
        inline app::XRPlaneSubsystemDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XRPlaneSubsystemDescriptor__Class>(type_info, "UnityEngine.Experimental.XR", "XRPlaneSubsystemDescriptor");
        }
        inline app::XRPlaneSubsystemDescriptor* create() {
            return il2cpp::create_object<app::XRPlaneSubsystemDescriptor>(get_class());
        }
    } // namespace XRPlaneSubsystemDescriptor
} // namespace app::classes::types
