#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications_AddApplicationManifest {
        inline app::IVRApplications_AddApplicationManifest__Class** type_info = (app::IVRApplications_AddApplicationManifest__Class**)(modloader::win::memory::resolve_rva(0x0476CF88));
        inline app::IVRApplications_AddApplicationManifest__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_AddApplicationManifest__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_AddApplicationManifest");
        }
        inline app::IVRApplications_AddApplicationManifest* create() {
            return il2cpp::create_object<app::IVRApplications_AddApplicationManifest>(get_class());
        }
    } // namespace IVRApplications_AddApplicationManifest
} // namespace app::classes::types
