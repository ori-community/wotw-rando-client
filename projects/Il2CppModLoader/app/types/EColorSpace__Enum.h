#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EColorSpace__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EColorSpace__Enum__Class** type_info;
        inline app::EColorSpace__Enum__Class* get_class() {
            return il2cpp::get_class<app::EColorSpace__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EColorSpace");
        }
        inline app::EColorSpace__Enum* create() {
            return il2cpp::create_object<app::EColorSpace__Enum>(get_class());
        }
    } // namespace EColorSpace__Enum
} // namespace app::classes::types
