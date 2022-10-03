#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRNotifications_CreateNotification {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRNotifications_CreateNotification__Class** type_info;
        inline app::IVRNotifications_CreateNotification__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRNotifications_CreateNotification__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRNotifications", "_CreateNotification");
        }
        inline app::IVRNotifications_CreateNotification* create() {
            return il2cpp::create_object<app::IVRNotifications_CreateNotification>(get_class());
        }
    } // namespace IVRNotifications_CreateNotification
} // namespace app::classes::types
