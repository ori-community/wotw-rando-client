#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRNotifications_RemoveNotification {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRNotifications_RemoveNotification__Class** type_info;
        inline app::IVRNotifications_RemoveNotification__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRNotifications_RemoveNotification__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRNotifications", "_RemoveNotification");
        }
        inline app::IVRNotifications_RemoveNotification* create() {
            return il2cpp::create_object<app::IVRNotifications_RemoveNotification>(get_class());
        }
    } // namespace IVRNotifications_RemoveNotification
} // namespace app::classes::types
