#pragma once
#include <Modloader/app/structs/IVRApplications_LaunchApplicationFromMimeType.h>
#include <Modloader/app/structs/IVRApplications_LaunchApplicationFromMimeType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_LaunchApplicationFromMimeType {
        inline app::IVRApplications_LaunchApplicationFromMimeType__Class** type_info() {
            static app::IVRApplications_LaunchApplicationFromMimeType__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRApplications_LaunchApplicationFromMimeType__Class**)(modloader::win::memory::resolve_rva(0x0474D190));
            }
            return cache;
        }
        inline app::IVRApplications_LaunchApplicationFromMimeType__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_LaunchApplicationFromMimeType__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_LaunchApplicationFromMimeType");
        }
        inline app::IVRApplications_LaunchApplicationFromMimeType* create() {
            return il2cpp::create_object<app::IVRApplications_LaunchApplicationFromMimeType>(get_class());
        }
    } // namespace IVRApplications_LaunchApplicationFromMimeType
} // namespace app::classes::types
