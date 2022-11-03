#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications_LaunchApplicationFromMimeType {
        inline app::IVRApplications_LaunchApplicationFromMimeType__Class** type_info = (app::IVRApplications_LaunchApplicationFromMimeType__Class**)(modloader::win::memory::resolve_rva(0x0474D190));
        inline app::IVRApplications_LaunchApplicationFromMimeType__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_LaunchApplicationFromMimeType__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_LaunchApplicationFromMimeType");
        }
        inline app::IVRApplications_LaunchApplicationFromMimeType* create() {
            return il2cpp::create_object<app::IVRApplications_LaunchApplicationFromMimeType>(get_class());
        }
    } // namespace IVRApplications_LaunchApplicationFromMimeType
} // namespace app::classes::types
