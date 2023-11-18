#pragma once
#include <Modloader/app/structs/IVRApplications_LaunchApplication.h>
#include <Modloader/app/structs/IVRApplications_LaunchApplication__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_LaunchApplication {
        inline app::IVRApplications_LaunchApplication__Class** type_info() {
            static app::IVRApplications_LaunchApplication__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRApplications_LaunchApplication__Class**)(modloader::win::memory::resolve_rva(0x0473FC18));
            }
            return cache;
        }
        inline app::IVRApplications_LaunchApplication__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_LaunchApplication__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_LaunchApplication");
        }
        inline app::IVRApplications_LaunchApplication* create() {
            return il2cpp::create_object<app::IVRApplications_LaunchApplication>(get_class());
        }
    } // namespace IVRApplications_LaunchApplication
} // namespace app::classes::types
