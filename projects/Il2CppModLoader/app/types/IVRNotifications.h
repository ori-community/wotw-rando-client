#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRNotifications {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRNotifications__Class** type_info;
        inline app::IVRNotifications__Class* get_class() {
            return il2cpp::get_class<app::IVRNotifications__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRNotifications");
        }
        inline app::IVRNotifications* create() {
            return il2cpp::create_object<app::IVRNotifications>(get_class());
        }
        inline app::IVRNotifications__Boxed* box(app::IVRNotifications value) {
            return il2cpp::box_value<app::IVRNotifications__Boxed>(get_class(), value);
        }
    } // namespace IVRNotifications
} // namespace app::classes::types
