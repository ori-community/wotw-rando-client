#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationsThatSupportMimeType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_GetApplicationsThatSupportMimeType__Class** type_info;
        inline app::IVRApplications_GetApplicationsThatSupportMimeType__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationsThatSupportMimeType__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationsThatSupportMimeType");
        }
        inline app::IVRApplications_GetApplicationsThatSupportMimeType* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationsThatSupportMimeType>(get_class());
        }
    } // namespace IVRApplications_GetApplicationsThatSupportMimeType
} // namespace app::classes::types
