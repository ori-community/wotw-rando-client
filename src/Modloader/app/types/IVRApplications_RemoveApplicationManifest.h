#pragma once
#include <Modloader/app/structs/IVRApplications_RemoveApplicationManifest.h>
#include <Modloader/app/structs/IVRApplications_RemoveApplicationManifest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_RemoveApplicationManifest {
        inline app::IVRApplications_RemoveApplicationManifest__Class** type_info() {
            static app::IVRApplications_RemoveApplicationManifest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRApplications_RemoveApplicationManifest__Class**)(modloader::win::memory::resolve_rva(0x0471B3E0));
            }
            return cache;
        }
        inline app::IVRApplications_RemoveApplicationManifest__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_RemoveApplicationManifest__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_RemoveApplicationManifest");
        }
        inline app::IVRApplications_RemoveApplicationManifest* create() {
            return il2cpp::create_object<app::IVRApplications_RemoveApplicationManifest>(get_class());
        }
    } // namespace IVRApplications_RemoveApplicationManifest
} // namespace app::classes::types
