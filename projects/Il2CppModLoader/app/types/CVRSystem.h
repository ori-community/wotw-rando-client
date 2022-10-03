#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CVRSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CVRSystem__Class** type_info;
        inline app::CVRSystem__Class* get_class() {
            return il2cpp::get_class<app::CVRSystem__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRSystem");
        }
        inline app::CVRSystem* create() {
            return il2cpp::create_object<app::CVRSystem>(get_class());
        }
    } // namespace CVRSystem
} // namespace app::classes::types
