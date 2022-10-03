#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XRCameraSubsystemDescriptor {
        namespace {
            app::XRCameraSubsystemDescriptor__Class* type_info_ref = nullptr;
        }
        app::XRCameraSubsystemDescriptor__Class** type_info = &type_info_ref;
        inline app::XRCameraSubsystemDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XRCameraSubsystemDescriptor__Class>(type_info, "UnityEngine.Experimental.XR", "XRCameraSubsystemDescriptor");
        }
        inline app::XRCameraSubsystemDescriptor* create() {
            return il2cpp::create_object<app::XRCameraSubsystemDescriptor>(get_class());
        }
    } // namespace XRCameraSubsystemDescriptor
} // namespace app::classes::types
