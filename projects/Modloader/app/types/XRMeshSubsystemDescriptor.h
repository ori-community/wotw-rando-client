#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XRMeshSubsystemDescriptor__Class.h>
#include <Modloader/app/structs/XRMeshSubsystemDescriptor.h>

namespace app::classes::types {
    namespace XRMeshSubsystemDescriptor {
        namespace {
            inline app::XRMeshSubsystemDescriptor__Class* type_info_ref = nullptr;
        }
        inline app::XRMeshSubsystemDescriptor__Class** type_info = &type_info_ref;
        inline app::XRMeshSubsystemDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XRMeshSubsystemDescriptor__Class>(type_info, "UnityEngine.Experimental.XR", "XRMeshSubsystemDescriptor");
        }
        inline app::XRMeshSubsystemDescriptor* create() {
            return il2cpp::create_object<app::XRMeshSubsystemDescriptor>(get_class());
        }
    } // namespace XRMeshSubsystemDescriptor
} // namespace app::classes::types
