#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XRCameraSubsystemDescriptor__Class.h>
#include <Modloader/app/structs/XRCameraSubsystemDescriptor.h>

namespace app::classes::types {
    namespace XRCameraSubsystemDescriptor {
        namespace {
            inline app::XRCameraSubsystemDescriptor__Class* type_info_ref = nullptr;
        }
        inline app::XRCameraSubsystemDescriptor__Class** type_info = &type_info_ref;
        inline app::XRCameraSubsystemDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XRCameraSubsystemDescriptor__Class>(type_info, "UnityEngine.Experimental.XR", "XRCameraSubsystemDescriptor");
        }
        inline app::XRCameraSubsystemDescriptor* create() {
            return il2cpp::create_object<app::XRCameraSubsystemDescriptor>(get_class());
        }
    } // namespace XRCameraSubsystemDescriptor
} // namespace app::classes::types
