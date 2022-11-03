#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications_IsApplicationInstalled {
        inline app::IVRApplications_IsApplicationInstalled__Class** type_info = (app::IVRApplications_IsApplicationInstalled__Class**)(modloader::win::memory::resolve_rva(0x04746E30));
        inline app::IVRApplications_IsApplicationInstalled__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_IsApplicationInstalled__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_IsApplicationInstalled");
        }
        inline app::IVRApplications_IsApplicationInstalled* create() {
            return il2cpp::create_object<app::IVRApplications_IsApplicationInstalled>(get_class());
        }
    } // namespace IVRApplications_IsApplicationInstalled
} // namespace app::classes::types
