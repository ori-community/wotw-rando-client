#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications_GetDefaultApplicationForMimeType {
        inline app::IVRApplications_GetDefaultApplicationForMimeType__Class** type_info = (app::IVRApplications_GetDefaultApplicationForMimeType__Class**)(modloader::win::memory::resolve_rva(0x04713DE0));
        inline app::IVRApplications_GetDefaultApplicationForMimeType__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetDefaultApplicationForMimeType__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetDefaultApplicationForMimeType");
        }
        inline app::IVRApplications_GetDefaultApplicationForMimeType* create() {
            return il2cpp::create_object<app::IVRApplications_GetDefaultApplicationForMimeType>(get_class());
        }
    } // namespace IVRApplications_GetDefaultApplicationForMimeType
} // namespace app::classes::types
