#pragma once
#include <Modloader/app/structs/IVRApplications_SetDefaultApplicationForMimeType.h>
#include <Modloader/app/structs/IVRApplications_SetDefaultApplicationForMimeType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_SetDefaultApplicationForMimeType {
        inline app::IVRApplications_SetDefaultApplicationForMimeType__Class** type_info() {
            static app::IVRApplications_SetDefaultApplicationForMimeType__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRApplications_SetDefaultApplicationForMimeType__Class**)(modloader::win::memory::resolve_rva(0x04751798));
            }
            return cache;
        }
        inline app::IVRApplications_SetDefaultApplicationForMimeType__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_SetDefaultApplicationForMimeType__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_SetDefaultApplicationForMimeType");
        }
        inline app::IVRApplications_SetDefaultApplicationForMimeType* create() {
            return il2cpp::create_object<app::IVRApplications_SetDefaultApplicationForMimeType>(get_class());
        }
    } // namespace IVRApplications_SetDefaultApplicationForMimeType
} // namespace app::classes::types
