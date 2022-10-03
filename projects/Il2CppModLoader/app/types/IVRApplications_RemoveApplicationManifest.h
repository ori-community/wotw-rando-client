#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_RemoveApplicationManifest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_RemoveApplicationManifest__Class** type_info;
        inline app::IVRApplications_RemoveApplicationManifest__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_RemoveApplicationManifest__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_RemoveApplicationManifest");
        }
        inline app::IVRApplications_RemoveApplicationManifest* create() {
            return il2cpp::create_object<app::IVRApplications_RemoveApplicationManifest>(get_class());
        }
    } // namespace IVRApplications_RemoveApplicationManifest
} // namespace app::classes::types
