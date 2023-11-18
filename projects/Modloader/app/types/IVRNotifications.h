#pragma once
#include <Modloader/app/structs/IVRNotifications.h>
#include <Modloader/app/structs/IVRNotifications__Boxed.h>
#include <Modloader/app/structs/IVRNotifications__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRNotifications {
        inline app::IVRNotifications__Class** type_info() {
            static app::IVRNotifications__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRNotifications__Class**)(modloader::win::memory::resolve_rva(0x047330A0));
            }
            return cache;
        }
        inline app::IVRNotifications__Class* get_class() {
            return il2cpp::get_class<app::IVRNotifications__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRNotifications");
        }
        inline app::IVRNotifications* create() {
            return il2cpp::create_object<app::IVRNotifications>(get_class());
        }
        inline app::IVRNotifications__Boxed* box(app::IVRNotifications value) {
            return il2cpp::box_value<app::IVRNotifications__Boxed>(get_class(), value);
        }
    } // namespace IVRNotifications
} // namespace app::classes::types
