#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XRSessionSubsystem__Class.h>
#include <Modloader/app/structs/XRSessionSubsystem.h>

namespace app::classes::types {
    namespace XRSessionSubsystem {
        namespace {
            inline app::XRSessionSubsystem__Class* type_info_ref = nullptr;
        }
        inline app::XRSessionSubsystem__Class** type_info = &type_info_ref;
        inline app::XRSessionSubsystem__Class* get_class() {
            return il2cpp::get_class<app::XRSessionSubsystem__Class>(type_info, "UnityEngine.Experimental.XR", "XRSessionSubsystem");
        }
        inline app::XRSessionSubsystem* create() {
            return il2cpp::create_object<app::XRSessionSubsystem>(get_class());
        }
    } // namespace XRSessionSubsystem
} // namespace app::classes::types
