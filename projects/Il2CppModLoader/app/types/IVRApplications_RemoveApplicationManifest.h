#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications_RemoveApplicationManifest {
        inline app::IVRApplications_RemoveApplicationManifest__Class** type_info = (app::IVRApplications_RemoveApplicationManifest__Class**)(modloader::win::memory::resolve_rva(0x0471B3E0));
        inline app::IVRApplications_RemoveApplicationManifest__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_RemoveApplicationManifest__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_RemoveApplicationManifest");
        }
        inline app::IVRApplications_RemoveApplicationManifest* create() {
            return il2cpp::create_object<app::IVRApplications_RemoveApplicationManifest>(get_class());
        }
    } // namespace IVRApplications_RemoveApplicationManifest
} // namespace app::classes::types
