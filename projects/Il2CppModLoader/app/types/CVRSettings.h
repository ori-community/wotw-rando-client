#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CVRSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CVRSettings__Class** type_info;
        inline app::CVRSettings__Class* get_class() {
            return il2cpp::get_class<app::CVRSettings__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRSettings");
        }
        inline app::CVRSettings* create() {
            return il2cpp::create_object<app::CVRSettings>(get_class());
        }
    } // namespace CVRSettings
} // namespace app::classes::types
