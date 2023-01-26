#pragma once
#include <Modloader/app/structs/XRSessionSubsystem.h>
#include <Modloader/app/structs/XRSessionSubsystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XRSessionSubsystem {
        inline app::XRSessionSubsystem__Class** type_info() {
            static app::XRSessionSubsystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XRSessionSubsystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XRSessionSubsystem__Class* get_class() {
            return il2cpp::get_class<app::XRSessionSubsystem__Class>(type_info(), "UnityEngine.Experimental.XR", "XRSessionSubsystem");
        }
        inline app::XRSessionSubsystem* create() {
            return il2cpp::create_object<app::XRSessionSubsystem>(get_class());
        }
    } // namespace XRSessionSubsystem
} // namespace app::classes::types
