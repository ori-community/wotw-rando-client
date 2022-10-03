#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_LaunchApplication {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_LaunchApplication__Class** type_info;
        inline app::IVRApplications_LaunchApplication__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_LaunchApplication__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_LaunchApplication");
        }
        inline app::IVRApplications_LaunchApplication* create() {
            return il2cpp::create_object<app::IVRApplications_LaunchApplication>(get_class());
        }
    } // namespace IVRApplications_LaunchApplication
} // namespace app::classes::types
