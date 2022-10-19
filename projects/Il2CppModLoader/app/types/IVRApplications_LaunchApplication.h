#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications_LaunchApplication {
        inline app::IVRApplications_LaunchApplication__Class** type_info = (app::IVRApplications_LaunchApplication__Class**)(modloader::win::memory::resolve_rva(0x0473FC18));
        inline app::IVRApplications_LaunchApplication__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_LaunchApplication__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_LaunchApplication");
        }
        inline app::IVRApplications_LaunchApplication* create() {
            return il2cpp::create_object<app::IVRApplications_LaunchApplication>(get_class());
        }
    } // namespace IVRApplications_LaunchApplication
} // namespace app::classes::types
