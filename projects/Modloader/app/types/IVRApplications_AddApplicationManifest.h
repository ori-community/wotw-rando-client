#pragma once
#include <Modloader/app/structs/IVRApplications_AddApplicationManifest.h>
#include <Modloader/app/structs/IVRApplications_AddApplicationManifest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_AddApplicationManifest {
        inline app::IVRApplications_AddApplicationManifest__Class** type_info() {
            static app::IVRApplications_AddApplicationManifest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRApplications_AddApplicationManifest__Class**)(modloader::win::memory::resolve_rva(0x0476CF88));
            }
            return cache;
        }
        inline app::IVRApplications_AddApplicationManifest__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_AddApplicationManifest__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_AddApplicationManifest");
        }
        inline app::IVRApplications_AddApplicationManifest* create() {
            return il2cpp::create_object<app::IVRApplications_AddApplicationManifest>(get_class());
        }
    } // namespace IVRApplications_AddApplicationManifest
} // namespace app::classes::types
