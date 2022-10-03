#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVRApplicationProperty__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EVRApplicationProperty__Enum__Class** type_info;
        inline app::EVRApplicationProperty__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRApplicationProperty__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRApplicationProperty");
        }
        inline app::EVRApplicationProperty__Enum* create() {
            return il2cpp::create_object<app::EVRApplicationProperty__Enum>(get_class());
        }
    } // namespace EVRApplicationProperty__Enum
} // namespace app::classes::types
