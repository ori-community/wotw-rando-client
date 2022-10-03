#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_SetDefaultApplicationForMimeType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_SetDefaultApplicationForMimeType__Class** type_info;
        inline app::IVRApplications_SetDefaultApplicationForMimeType__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_SetDefaultApplicationForMimeType__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_SetDefaultApplicationForMimeType");
        }
        inline app::IVRApplications_SetDefaultApplicationForMimeType* create() {
            return il2cpp::create_object<app::IVRApplications_SetDefaultApplicationForMimeType>(get_class());
        }
    } // namespace IVRApplications_SetDefaultApplicationForMimeType
} // namespace app::classes::types
