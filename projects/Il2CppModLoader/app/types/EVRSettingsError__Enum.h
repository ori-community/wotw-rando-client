#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVRSettingsError__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EVRSettingsError__Enum__Class** type_info;
        inline app::EVRSettingsError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRSettingsError__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRSettingsError");
        }
        inline app::EVRSettingsError__Enum* create() {
            return il2cpp::create_object<app::EVRSettingsError__Enum>(get_class());
        }
    } // namespace EVRSettingsError__Enum
} // namespace app::classes::types
