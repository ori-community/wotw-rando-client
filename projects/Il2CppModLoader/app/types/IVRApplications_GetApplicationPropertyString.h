#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationPropertyString {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_GetApplicationPropertyString__Class** type_info;
        inline app::IVRApplications_GetApplicationPropertyString__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationPropertyString__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationPropertyString");
        }
        inline app::IVRApplications_GetApplicationPropertyString* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationPropertyString>(get_class());
        }
    } // namespace IVRApplications_GetApplicationPropertyString
} // namespace app::classes::types
