#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VREvent_Notification_t {
        namespace {
            inline app::VREvent_Notification_t__Class* type_info_ref = nullptr;
        }
        inline app::VREvent_Notification_t__Class** type_info = &type_info_ref;
        inline app::VREvent_Notification_t__Class* get_class() {
            return il2cpp::get_class<app::VREvent_Notification_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "VREvent_Notification_t");
        }
        inline app::VREvent_Notification_t* create() {
            return il2cpp::create_object<app::VREvent_Notification_t>(get_class());
        }
        inline app::VREvent_Notification_t__Boxed* box(app::VREvent_Notification_t value) {
            return il2cpp::box_value<app::VREvent_Notification_t__Boxed>(get_class(), value);
        }
    } // namespace VREvent_Notification_t
} // namespace app::classes::types
