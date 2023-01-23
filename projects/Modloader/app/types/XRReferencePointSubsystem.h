#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XRReferencePointSubsystem__Class.h>
#include <Modloader/app/structs/XRReferencePointSubsystem.h>

namespace app::classes::types {
    namespace XRReferencePointSubsystem {
        namespace {
            inline app::XRReferencePointSubsystem__Class* type_info_ref = nullptr;
        }
        inline app::XRReferencePointSubsystem__Class** type_info = &type_info_ref;
        inline app::XRReferencePointSubsystem__Class* get_class() {
            return il2cpp::get_class<app::XRReferencePointSubsystem__Class>(type_info, "UnityEngine.Experimental.XR", "XRReferencePointSubsystem");
        }
        inline app::XRReferencePointSubsystem* create() {
            return il2cpp::create_object<app::XRReferencePointSubsystem>(get_class());
        }
    } // namespace XRReferencePointSubsystem
} // namespace app::classes::types
