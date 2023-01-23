#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRApplications_LaunchTemplateApplication__Class.h>
#include <Modloader/app/structs/IVRApplications_LaunchTemplateApplication.h>

namespace app::classes::types {
    namespace IVRApplications_LaunchTemplateApplication {
        inline app::IVRApplications_LaunchTemplateApplication__Class** type_info = (app::IVRApplications_LaunchTemplateApplication__Class**)(modloader::win::memory::resolve_rva(0x04710030));
        inline app::IVRApplications_LaunchTemplateApplication__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_LaunchTemplateApplication__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_LaunchTemplateApplication");
        }
        inline app::IVRApplications_LaunchTemplateApplication* create() {
            return il2cpp::create_object<app::IVRApplications_LaunchTemplateApplication>(get_class());
        }
    } // namespace IVRApplications_LaunchTemplateApplication
} // namespace app::classes::types
