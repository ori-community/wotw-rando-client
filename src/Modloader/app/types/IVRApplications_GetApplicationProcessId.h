#pragma once
#include <Modloader/app/structs/IVRApplications_GetApplicationProcessId.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationProcessId__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationProcessId {
        inline app::IVRApplications_GetApplicationProcessId__Class** type_info() {
            static app::IVRApplications_GetApplicationProcessId__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRApplications_GetApplicationProcessId__Class**)(modloader::win::memory::resolve_rva(0x0472A2D8));
            }
            return cache;
        }
        inline app::IVRApplications_GetApplicationProcessId__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationProcessId__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationProcessId");
        }
        inline app::IVRApplications_GetApplicationProcessId* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationProcessId>(get_class());
        }
    } // namespace IVRApplications_GetApplicationProcessId
} // namespace app::classes::types
