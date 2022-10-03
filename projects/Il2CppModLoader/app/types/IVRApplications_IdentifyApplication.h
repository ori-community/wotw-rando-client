#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_IdentifyApplication {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_IdentifyApplication__Class** type_info;
        inline app::IVRApplications_IdentifyApplication__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_IdentifyApplication__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_IdentifyApplication");
        }
        inline app::IVRApplications_IdentifyApplication* create() {
            return il2cpp::create_object<app::IVRApplications_IdentifyApplication>(get_class());
        }
    } // namespace IVRApplications_IdentifyApplication
} // namespace app::classes::types
