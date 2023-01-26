#pragma once
#include <Modloader/app/structs/IVRApplications_GetApplicationPropertyBool.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationPropertyBool__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationPropertyBool {
        inline app::IVRApplications_GetApplicationPropertyBool__Class** type_info() {
            static app::IVRApplications_GetApplicationPropertyBool__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRApplications_GetApplicationPropertyBool__Class**)(modloader::win::memory::resolve_rva(0x0470E270));
            }
            return cache;
        }
        inline app::IVRApplications_GetApplicationPropertyBool__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationPropertyBool__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationPropertyBool");
        }
        inline app::IVRApplications_GetApplicationPropertyBool* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationPropertyBool>(get_class());
        }
    } // namespace IVRApplications_GetApplicationPropertyBool
} // namespace app::classes::types
