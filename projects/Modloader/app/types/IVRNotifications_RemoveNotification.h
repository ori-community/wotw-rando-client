#pragma once
#include <Modloader/app/structs/IVRNotifications_RemoveNotification.h>
#include <Modloader/app/structs/IVRNotifications_RemoveNotification__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRNotifications_RemoveNotification {
        inline app::IVRNotifications_RemoveNotification__Class** type_info() {
            static app::IVRNotifications_RemoveNotification__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRNotifications_RemoveNotification__Class**)(modloader::win::memory::resolve_rva(0x047263A8));
            }
            return cache;
        }
        inline app::IVRNotifications_RemoveNotification__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRNotifications_RemoveNotification__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRNotifications", "_RemoveNotification");
        }
        inline app::IVRNotifications_RemoveNotification* create() {
            return il2cpp::create_object<app::IVRNotifications_RemoveNotification>(get_class());
        }
    } // namespace IVRNotifications_RemoveNotification
} // namespace app::classes::types
