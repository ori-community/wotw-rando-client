#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications_PerformApplicationPrelaunchCheck {
        inline app::IVRApplications_PerformApplicationPrelaunchCheck__Class** type_info = (app::IVRApplications_PerformApplicationPrelaunchCheck__Class**)(modloader::win::memory::resolve_rva(0x0471E6C8));
        inline app::IVRApplications_PerformApplicationPrelaunchCheck__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_PerformApplicationPrelaunchCheck__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_PerformApplicationPrelaunchCheck");
        }
        inline app::IVRApplications_PerformApplicationPrelaunchCheck* create() {
            return il2cpp::create_object<app::IVRApplications_PerformApplicationPrelaunchCheck>(get_class());
        }
    } // namespace IVRApplications_PerformApplicationPrelaunchCheck
} // namespace app::classes::types
