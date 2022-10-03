#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CVRApplications {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CVRApplications__Class** type_info;
        inline app::CVRApplications__Class* get_class() {
            return il2cpp::get_class<app::CVRApplications__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRApplications");
        }
        inline app::CVRApplications* create() {
            return il2cpp::create_object<app::CVRApplications>(get_class());
        }
    } // namespace CVRApplications
} // namespace app::classes::types
