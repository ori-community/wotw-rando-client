#pragma once
#include <Modloader/app/structs/XRReferencePointSubsystemDescriptor.h>
#include <Modloader/app/structs/XRReferencePointSubsystemDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XRReferencePointSubsystemDescriptor {
        inline app::XRReferencePointSubsystemDescriptor__Class** type_info() {
            static app::XRReferencePointSubsystemDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XRReferencePointSubsystemDescriptor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XRReferencePointSubsystemDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XRReferencePointSubsystemDescriptor__Class>(type_info(), "UnityEngine.Experimental.XR", "XRReferencePointSubsystemDescriptor");
        }
        inline app::XRReferencePointSubsystemDescriptor* create() {
            return il2cpp::create_object<app::XRReferencePointSubsystemDescriptor>(get_class());
        }
    } // namespace XRReferencePointSubsystemDescriptor
} // namespace app::classes::types
