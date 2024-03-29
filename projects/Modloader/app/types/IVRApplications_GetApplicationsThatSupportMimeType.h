#pragma once
#include <Modloader/app/structs/IVRApplications_GetApplicationsThatSupportMimeType.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationsThatSupportMimeType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationsThatSupportMimeType {
        inline app::IVRApplications_GetApplicationsThatSupportMimeType__Class** type_info() {
            static app::IVRApplications_GetApplicationsThatSupportMimeType__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRApplications_GetApplicationsThatSupportMimeType__Class**)(modloader::win::memory::resolve_rva(0x04706908));
            }
            return cache;
        }
        inline app::IVRApplications_GetApplicationsThatSupportMimeType__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationsThatSupportMimeType__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationsThatSupportMimeType");
        }
        inline app::IVRApplications_GetApplicationsThatSupportMimeType* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationsThatSupportMimeType>(get_class());
        }
    } // namespace IVRApplications_GetApplicationsThatSupportMimeType
} // namespace app::classes::types
