#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CVRChaperone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CVRChaperone__Class** type_info;
        inline app::CVRChaperone__Class* get_class() {
            return il2cpp::get_class<app::CVRChaperone__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRChaperone");
        }
        inline app::CVRChaperone* create() {
            return il2cpp::create_object<app::CVRChaperone>(get_class());
        }
    } // namespace CVRChaperone
} // namespace app::classes::types
