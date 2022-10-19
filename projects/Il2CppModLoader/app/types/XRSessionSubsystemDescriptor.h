#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XRSessionSubsystemDescriptor {
        namespace {
            inline app::XRSessionSubsystemDescriptor__Class* type_info_ref = nullptr;
        }
        inline app::XRSessionSubsystemDescriptor__Class** type_info = &type_info_ref;
        inline app::XRSessionSubsystemDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XRSessionSubsystemDescriptor__Class>(type_info, "UnityEngine.Experimental.XR", "XRSessionSubsystemDescriptor");
        }
        inline app::XRSessionSubsystemDescriptor* create() {
            return il2cpp::create_object<app::XRSessionSubsystemDescriptor>(get_class());
        }
    } // namespace XRSessionSubsystemDescriptor
} // namespace app::classes::types
