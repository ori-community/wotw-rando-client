#pragma once
#include <Modloader/app/structs/IVRApplications_GetApplicationsErrorNameFromEnum.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationsErrorNameFromEnum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationsErrorNameFromEnum {
        inline app::IVRApplications_GetApplicationsErrorNameFromEnum__Class** type_info() {
            static app::IVRApplications_GetApplicationsErrorNameFromEnum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRApplications_GetApplicationsErrorNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x0477B8D0));
            }
            return cache;
        }
        inline app::IVRApplications_GetApplicationsErrorNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationsErrorNameFromEnum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationsErrorNameFromEnum");
        }
        inline app::IVRApplications_GetApplicationsErrorNameFromEnum* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationsErrorNameFromEnum>(get_class());
        }
    } // namespace IVRApplications_GetApplicationsErrorNameFromEnum
} // namespace app::classes::types
