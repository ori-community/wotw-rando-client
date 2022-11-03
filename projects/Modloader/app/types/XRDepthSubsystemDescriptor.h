#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XRDepthSubsystemDescriptor {
        namespace {
            inline app::XRDepthSubsystemDescriptor__Class* type_info_ref = nullptr;
        }
        inline app::XRDepthSubsystemDescriptor__Class** type_info = &type_info_ref;
        inline app::XRDepthSubsystemDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XRDepthSubsystemDescriptor__Class>(type_info, "UnityEngine.Experimental.XR", "XRDepthSubsystemDescriptor");
        }
        inline app::XRDepthSubsystemDescriptor* create() {
            return il2cpp::create_object<app::XRDepthSubsystemDescriptor>(get_class());
        }
    } // namespace XRDepthSubsystemDescriptor
} // namespace app::classes::types
