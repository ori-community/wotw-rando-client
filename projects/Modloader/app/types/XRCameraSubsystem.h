#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XRCameraSubsystem {
        namespace {
            inline app::XRCameraSubsystem__Class* type_info_ref = nullptr;
        }
        inline app::XRCameraSubsystem__Class** type_info = &type_info_ref;
        inline app::XRCameraSubsystem__Class* get_class() {
            return il2cpp::get_class<app::XRCameraSubsystem__Class>(type_info, "UnityEngine.Experimental.XR", "XRCameraSubsystem");
        }
        inline app::XRCameraSubsystem* create() {
            return il2cpp::create_object<app::XRCameraSubsystem>(get_class());
        }
    } // namespace XRCameraSubsystem
} // namespace app::classes::types
