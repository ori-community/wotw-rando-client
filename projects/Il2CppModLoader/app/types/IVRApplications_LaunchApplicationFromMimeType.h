#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_LaunchApplicationFromMimeType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_LaunchApplicationFromMimeType__Class** type_info;
        inline app::IVRApplications_LaunchApplicationFromMimeType__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_LaunchApplicationFromMimeType__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_LaunchApplicationFromMimeType");
        }
        inline app::IVRApplications_LaunchApplicationFromMimeType* create() {
            return il2cpp::create_object<app::IVRApplications_LaunchApplicationFromMimeType>(get_class());
        }
    } // namespace IVRApplications_LaunchApplicationFromMimeType
} // namespace app::classes::types
