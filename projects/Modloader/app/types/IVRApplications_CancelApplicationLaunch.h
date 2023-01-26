#pragma once
#include <Modloader/app/structs/IVRApplications_CancelApplicationLaunch.h>
#include <Modloader/app/structs/IVRApplications_CancelApplicationLaunch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_CancelApplicationLaunch {
        inline app::IVRApplications_CancelApplicationLaunch__Class** type_info() {
            static app::IVRApplications_CancelApplicationLaunch__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRApplications_CancelApplicationLaunch__Class**)(modloader::win::memory::resolve_rva(0x04770370));
            }
            return cache;
        }
        inline app::IVRApplications_CancelApplicationLaunch__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_CancelApplicationLaunch__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_CancelApplicationLaunch");
        }
        inline app::IVRApplications_CancelApplicationLaunch* create() {
            return il2cpp::create_object<app::IVRApplications_CancelApplicationLaunch>(get_class());
        }
    } // namespace IVRApplications_CancelApplicationLaunch
} // namespace app::classes::types
