#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRNotifications {
        inline app::IVRNotifications__Class** type_info = (app::IVRNotifications__Class**)(modloader::win::memory::resolve_rva(0x047330A0));
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
