#pragma once
#include <Modloader/app/structs/XRMeshSubsystem.h>
#include <Modloader/app/structs/XRMeshSubsystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XRMeshSubsystem {
        inline app::XRMeshSubsystem__Class** type_info() {
            static app::XRMeshSubsystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XRMeshSubsystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XRMeshSubsystem__Class* get_class() {
            return il2cpp::get_class<app::XRMeshSubsystem__Class>(type_info(), "UnityEngine.Experimental.XR", "XRMeshSubsystem");
        }
        inline app::XRMeshSubsystem* create() {
            return il2cpp::create_object<app::XRMeshSubsystem>(get_class());
        }
    } // namespace XRMeshSubsystem
} // namespace app::classes::types
