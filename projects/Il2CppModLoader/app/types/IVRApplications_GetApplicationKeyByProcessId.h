#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationKeyByProcessId {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_GetApplicationKeyByProcessId__Class** type_info;
        inline app::IVRApplications_GetApplicationKeyByProcessId__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationKeyByProcessId__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationKeyByProcessId");
        }
        inline app::IVRApplications_GetApplicationKeyByProcessId* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationKeyByProcessId>(get_class());
        }
    } // namespace IVRApplications_GetApplicationKeyByProcessId
} // namespace app::classes::types
