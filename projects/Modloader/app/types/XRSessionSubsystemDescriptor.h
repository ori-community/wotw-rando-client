#pragma once
#include <Modloader/app/structs/XRSessionSubsystemDescriptor.h>
#include <Modloader/app/structs/XRSessionSubsystemDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XRSessionSubsystemDescriptor {
        inline app::XRSessionSubsystemDescriptor__Class** type_info() {
            static app::XRSessionSubsystemDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XRSessionSubsystemDescriptor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XRSessionSubsystemDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XRSessionSubsystemDescriptor__Class>(type_info(), "UnityEngine.Experimental.XR", "XRSessionSubsystemDescriptor");
        }
        inline app::XRSessionSubsystemDescriptor* create() {
            return il2cpp::create_object<app::XRSessionSubsystemDescriptor>(get_class());
        }
    } // namespace XRSessionSubsystemDescriptor
} // namespace app::classes::types
