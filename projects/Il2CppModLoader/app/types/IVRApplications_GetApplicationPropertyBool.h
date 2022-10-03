#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationPropertyBool {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_GetApplicationPropertyBool__Class** type_info;
        inline app::IVRApplications_GetApplicationPropertyBool__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationPropertyBool__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationPropertyBool");
        }
        inline app::IVRApplications_GetApplicationPropertyBool* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationPropertyBool>(get_class());
        }
    } // namespace IVRApplications_GetApplicationPropertyBool
} // namespace app::classes::types
