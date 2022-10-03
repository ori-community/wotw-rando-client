#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_CancelApplicationLaunch {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_CancelApplicationLaunch__Class** type_info;
        inline app::IVRApplications_CancelApplicationLaunch__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_CancelApplicationLaunch__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_CancelApplicationLaunch");
        }
        inline app::IVRApplications_CancelApplicationLaunch* create() {
            return il2cpp::create_object<app::IVRApplications_CancelApplicationLaunch>(get_class());
        }
    } // namespace IVRApplications_CancelApplicationLaunch
} // namespace app::classes::types
