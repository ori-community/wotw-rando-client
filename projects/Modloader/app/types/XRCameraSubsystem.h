#pragma once
#include <Modloader/app/structs/XRCameraSubsystem.h>
#include <Modloader/app/structs/XRCameraSubsystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XRCameraSubsystem {
        inline app::XRCameraSubsystem__Class** type_info() {
            static app::XRCameraSubsystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XRCameraSubsystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XRCameraSubsystem__Class* get_class() {
            return il2cpp::get_class<app::XRCameraSubsystem__Class>(type_info(), "UnityEngine.Experimental.XR", "XRCameraSubsystem");
        }
        inline app::XRCameraSubsystem* create() {
            return il2cpp::create_object<app::XRCameraSubsystem>(get_class());
        }
    } // namespace XRCameraSubsystem
} // namespace app::classes::types
