#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVREventType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EVREventType__Enum__Class** type_info;
        inline app::EVREventType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVREventType__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVREventType");
        }
        inline app::EVREventType__Enum* create() {
            return il2cpp::create_object<app::EVREventType__Enum>(get_class());
        }
    } // namespace EVREventType__Enum
} // namespace app::classes::types
