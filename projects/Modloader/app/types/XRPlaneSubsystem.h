#pragma once
#include <Modloader/app/structs/XRPlaneSubsystem.h>
#include <Modloader/app/structs/XRPlaneSubsystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XRPlaneSubsystem {
        inline app::XRPlaneSubsystem__Class** type_info() {
            static app::XRPlaneSubsystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XRPlaneSubsystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XRPlaneSubsystem__Class* get_class() {
            return il2cpp::get_class<app::XRPlaneSubsystem__Class>(type_info(), "UnityEngine.Experimental.XR", "XRPlaneSubsystem");
        }
        inline app::XRPlaneSubsystem* create() {
            return il2cpp::create_object<app::XRPlaneSubsystem>(get_class());
        }
    } // namespace XRPlaneSubsystem
} // namespace app::classes::types
