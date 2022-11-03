#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XRPlaneSubsystem {
        namespace {
            inline app::XRPlaneSubsystem__Class* type_info_ref = nullptr;
        }
        inline app::XRPlaneSubsystem__Class** type_info = &type_info_ref;
        inline app::XRPlaneSubsystem__Class* get_class() {
            return il2cpp::get_class<app::XRPlaneSubsystem__Class>(type_info, "UnityEngine.Experimental.XR", "XRPlaneSubsystem");
        }
        inline app::XRPlaneSubsystem* create() {
            return il2cpp::create_object<app::XRPlaneSubsystem>(get_class());
        }
    } // namespace XRPlaneSubsystem
} // namespace app::classes::types
