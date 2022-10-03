#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_PerformApplicationPrelaunchCheck {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_PerformApplicationPrelaunchCheck__Class** type_info;
        inline app::IVRApplications_PerformApplicationPrelaunchCheck__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_PerformApplicationPrelaunchCheck__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_PerformApplicationPrelaunchCheck");
        }
        inline app::IVRApplications_PerformApplicationPrelaunchCheck* create() {
            return il2cpp::create_object<app::IVRApplications_PerformApplicationPrelaunchCheck>(get_class());
        }
    } // namespace IVRApplications_PerformApplicationPrelaunchCheck
} // namespace app::classes::types
