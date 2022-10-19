#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications_GetStartingApplication {
        inline app::IVRApplications_GetStartingApplication__Class** type_info = (app::IVRApplications_GetStartingApplication__Class**)(modloader::win::memory::resolve_rva(0x04734030));
        inline app::IVRApplications_GetStartingApplication__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetStartingApplication__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetStartingApplication");
        }
        inline app::IVRApplications_GetStartingApplication* create() {
            return il2cpp::create_object<app::IVRApplications_GetStartingApplication>(get_class());
        }
    } // namespace IVRApplications_GetStartingApplication
} // namespace app::classes::types
