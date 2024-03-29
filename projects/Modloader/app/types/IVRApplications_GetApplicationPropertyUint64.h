#pragma once
#include <Modloader/app/structs/IVRApplications_GetApplicationPropertyUint64.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationPropertyUint64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationPropertyUint64 {
        inline app::IVRApplications_GetApplicationPropertyUint64__Class** type_info() {
            static app::IVRApplications_GetApplicationPropertyUint64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRApplications_GetApplicationPropertyUint64__Class**)(modloader::win::memory::resolve_rva(0x04774868));
            }
            return cache;
        }
        inline app::IVRApplications_GetApplicationPropertyUint64__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationPropertyUint64__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationPropertyUint64");
        }
        inline app::IVRApplications_GetApplicationPropertyUint64* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationPropertyUint64>(get_class());
        }
    } // namespace IVRApplications_GetApplicationPropertyUint64
} // namespace app::classes::types
