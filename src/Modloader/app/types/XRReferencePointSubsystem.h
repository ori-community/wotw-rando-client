#pragma once
#include <Modloader/app/structs/XRReferencePointSubsystem.h>
#include <Modloader/app/structs/XRReferencePointSubsystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XRReferencePointSubsystem {
        inline app::XRReferencePointSubsystem__Class** type_info() {
            static app::XRReferencePointSubsystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XRReferencePointSubsystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XRReferencePointSubsystem__Class* get_class() {
            return il2cpp::get_class<app::XRReferencePointSubsystem__Class>(type_info(), "UnityEngine.Experimental.XR", "XRReferencePointSubsystem");
        }
        inline app::XRReferencePointSubsystem* create() {
            return il2cpp::create_object<app::XRReferencePointSubsystem>(get_class());
        }
    } // namespace XRReferencePointSubsystem
} // namespace app::classes::types
