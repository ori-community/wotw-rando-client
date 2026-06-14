#pragma once
#include <Modloader/app/structs/IVRApplications_IdentifyApplication.h>
#include <Modloader/app/structs/IVRApplications_IdentifyApplication__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_IdentifyApplication {
        inline app::IVRApplications_IdentifyApplication__Class** type_info() {
            static app::IVRApplications_IdentifyApplication__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRApplications_IdentifyApplication__Class**)(modloader::win::memory::resolve_rva(0x047238B0));
            }
            return cache;
        }
        inline app::IVRApplications_IdentifyApplication__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_IdentifyApplication__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_IdentifyApplication");
        }
        inline app::IVRApplications_IdentifyApplication* create() {
            return il2cpp::create_object<app::IVRApplications_IdentifyApplication>(get_class());
        }
    } // namespace IVRApplications_IdentifyApplication
} // namespace app::classes::types
