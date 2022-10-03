#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetStartingApplication {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_GetStartingApplication__Class** type_info;
        inline app::IVRApplications_GetStartingApplication__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetStartingApplication__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetStartingApplication");
        }
        inline app::IVRApplications_GetStartingApplication* create() {
            return il2cpp::create_object<app::IVRApplications_GetStartingApplication>(get_class());
        }
    } // namespace IVRApplications_GetStartingApplication
} // namespace app::classes::types
