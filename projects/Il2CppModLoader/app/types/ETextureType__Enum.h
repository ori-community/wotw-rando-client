#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ETextureType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ETextureType__Enum__Class** type_info;
        inline app::ETextureType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ETextureType__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "ETextureType");
        }
        inline app::ETextureType__Enum* create() {
            return il2cpp::create_object<app::ETextureType__Enum>(get_class());
        }
    } // namespace ETextureType__Enum
} // namespace app::classes::types
