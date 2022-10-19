#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationPropertyUint64 {
        inline app::IVRApplications_GetApplicationPropertyUint64__Class** type_info = (app::IVRApplications_GetApplicationPropertyUint64__Class**)(modloader::win::memory::resolve_rva(0x04774868));
        inline app::IVRApplications_GetApplicationPropertyUint64__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationPropertyUint64__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationPropertyUint64");
        }
        inline app::IVRApplications_GetApplicationPropertyUint64* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationPropertyUint64>(get_class());
        }
    } // namespace IVRApplications_GetApplicationPropertyUint64
} // namespace app::classes::types
