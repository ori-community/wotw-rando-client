#pragma once
#include <Modloader/app/structs/IVRApplications_GetApplicationLaunchArguments.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationLaunchArguments__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationLaunchArguments {
        inline app::IVRApplications_GetApplicationLaunchArguments__Class** type_info() {
            static app::IVRApplications_GetApplicationLaunchArguments__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRApplications_GetApplicationLaunchArguments__Class**)(modloader::win::memory::resolve_rva(0x047350C8));
            }
            return cache;
        }
        inline app::IVRApplications_GetApplicationLaunchArguments__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationLaunchArguments__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationLaunchArguments");
        }
        inline app::IVRApplications_GetApplicationLaunchArguments* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationLaunchArguments>(get_class());
        }
    } // namespace IVRApplications_GetApplicationLaunchArguments
} // namespace app::classes::types
