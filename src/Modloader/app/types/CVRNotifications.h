#pragma once
#include <Modloader/app/structs/CVRNotifications.h>
#include <Modloader/app/structs/CVRNotifications__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CVRNotifications {
        inline app::CVRNotifications__Class** type_info() {
            static app::CVRNotifications__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CVRNotifications__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CVRNotifications__Class* get_class() {
            return il2cpp::get_class<app::CVRNotifications__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "CVRNotifications");
        }
        inline app::CVRNotifications* create() {
            return il2cpp::create_object<app::CVRNotifications>(get_class());
        }
    } // namespace CVRNotifications
} // namespace app::classes::types
