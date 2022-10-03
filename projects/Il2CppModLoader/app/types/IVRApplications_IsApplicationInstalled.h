#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_IsApplicationInstalled {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_IsApplicationInstalled__Class** type_info;
        inline app::IVRApplications_IsApplicationInstalled__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_IsApplicationInstalled__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_IsApplicationInstalled");
        }
        inline app::IVRApplications_IsApplicationInstalled* create() {
            return il2cpp::create_object<app::IVRApplications_IsApplicationInstalled>(get_class());
        }
    } // namespace IVRApplications_IsApplicationInstalled
} // namespace app::classes::types
