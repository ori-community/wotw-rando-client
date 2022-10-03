#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationLaunchArguments {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_GetApplicationLaunchArguments__Class** type_info;
        inline app::IVRApplications_GetApplicationLaunchArguments__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationLaunchArguments__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationLaunchArguments");
        }
        inline app::IVRApplications_GetApplicationLaunchArguments* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationLaunchArguments>(get_class());
        }
    } // namespace IVRApplications_GetApplicationLaunchArguments
} // namespace app::classes::types
