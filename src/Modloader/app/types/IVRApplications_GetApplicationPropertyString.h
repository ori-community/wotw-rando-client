#pragma once
#include <Modloader/app/structs/IVRApplications_GetApplicationPropertyString.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationPropertyString__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationPropertyString {
        inline app::IVRApplications_GetApplicationPropertyString__Class** type_info() {
            static app::IVRApplications_GetApplicationPropertyString__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRApplications_GetApplicationPropertyString__Class**)(modloader::win::memory::resolve_rva(0x0476F458));
            }
            return cache;
        }
        inline app::IVRApplications_GetApplicationPropertyString__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationPropertyString__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationPropertyString");
        }
        inline app::IVRApplications_GetApplicationPropertyString* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationPropertyString>(get_class());
        }
    } // namespace IVRApplications_GetApplicationPropertyString
} // namespace app::classes::types
