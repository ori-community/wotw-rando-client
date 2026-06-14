#pragma once
#include <Modloader/app/structs/IVRApplications_LaunchInternalProcess.h>
#include <Modloader/app/structs/IVRApplications_LaunchInternalProcess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_LaunchInternalProcess {
        inline app::IVRApplications_LaunchInternalProcess__Class** type_info() {
            static app::IVRApplications_LaunchInternalProcess__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRApplications_LaunchInternalProcess__Class**)(modloader::win::memory::resolve_rva(0x04712F50));
            }
            return cache;
        }
        inline app::IVRApplications_LaunchInternalProcess__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_LaunchInternalProcess__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_LaunchInternalProcess");
        }
        inline app::IVRApplications_LaunchInternalProcess* create() {
            return il2cpp::create_object<app::IVRApplications_LaunchInternalProcess>(get_class());
        }
    } // namespace IVRApplications_LaunchInternalProcess
} // namespace app::classes::types
