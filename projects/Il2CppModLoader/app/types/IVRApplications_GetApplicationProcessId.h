#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationProcessId {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_GetApplicationProcessId__Class** type_info;
        inline app::IVRApplications_GetApplicationProcessId__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationProcessId__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationProcessId");
        }
        inline app::IVRApplications_GetApplicationProcessId* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationProcessId>(get_class());
        }
    } // namespace IVRApplications_GetApplicationProcessId
} // namespace app::classes::types
