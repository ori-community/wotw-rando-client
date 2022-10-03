#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVRNotificationStyle__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EVRNotificationStyle__Enum__Class** type_info;
        inline app::EVRNotificationStyle__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRNotificationStyle__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRNotificationStyle");
        }
        inline app::EVRNotificationStyle__Enum* create() {
            return il2cpp::create_object<app::EVRNotificationStyle__Enum>(get_class());
        }
    } // namespace EVRNotificationStyle__Enum
} // namespace app::classes::types
