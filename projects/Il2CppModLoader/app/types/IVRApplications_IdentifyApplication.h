#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications_IdentifyApplication {
        inline app::IVRApplications_IdentifyApplication__Class** type_info = (app::IVRApplications_IdentifyApplication__Class**)(modloader::win::memory::resolve_rva(0x047238B0));
        inline app::IVRApplications_IdentifyApplication__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_IdentifyApplication__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_IdentifyApplication");
        }
        inline app::IVRApplications_IdentifyApplication* create() {
            return il2cpp::create_object<app::IVRApplications_IdentifyApplication>(get_class());
        }
    } // namespace IVRApplications_IdentifyApplication
} // namespace app::classes::types
