#pragma once
#include <Modloader/app/structs/XRDepthSubsystem.h>
#include <Modloader/app/structs/XRDepthSubsystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XRDepthSubsystem {
        inline app::XRDepthSubsystem__Class** type_info() {
            static app::XRDepthSubsystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XRDepthSubsystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XRDepthSubsystem__Class* get_class() {
            return il2cpp::get_class<app::XRDepthSubsystem__Class>(type_info(), "UnityEngine.Experimental.XR", "XRDepthSubsystem");
        }
        inline app::XRDepthSubsystem* create() {
            return il2cpp::create_object<app::XRDepthSubsystem>(get_class());
        }
    } // namespace XRDepthSubsystem
} // namespace app::classes::types
