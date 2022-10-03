#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVRNotificationType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EVRNotificationType__Enum__Class** type_info;
        inline app::EVRNotificationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRNotificationType__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRNotificationType");
        }
        inline app::EVRNotificationType__Enum* create() {
            return il2cpp::create_object<app::EVRNotificationType__Enum>(get_class());
        }
    } // namespace EVRNotificationType__Enum
} // namespace app::classes::types
