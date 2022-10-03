#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetDefaultApplicationForMimeType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_GetDefaultApplicationForMimeType__Class** type_info;
        inline app::IVRApplications_GetDefaultApplicationForMimeType__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetDefaultApplicationForMimeType__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetDefaultApplicationForMimeType");
        }
        inline app::IVRApplications_GetDefaultApplicationForMimeType* create() {
            return il2cpp::create_object<app::IVRApplications_GetDefaultApplicationForMimeType>(get_class());
        }
    } // namespace IVRApplications_GetDefaultApplicationForMimeType
} // namespace app::classes::types
