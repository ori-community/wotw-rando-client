#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_LaunchTemplateApplication {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_LaunchTemplateApplication__Class** type_info;
        inline app::IVRApplications_LaunchTemplateApplication__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_LaunchTemplateApplication__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_LaunchTemplateApplication");
        }
        inline app::IVRApplications_LaunchTemplateApplication* create() {
            return il2cpp::create_object<app::IVRApplications_LaunchTemplateApplication>(get_class());
        }
    } // namespace IVRApplications_LaunchTemplateApplication
} // namespace app::classes::types
