#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CVRCompositor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CVRCompositor__Class** type_info;
        inline app::CVRCompositor__Class* get_class() {
            return il2cpp::get_class<app::CVRCompositor__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRCompositor");
        }
        inline app::CVRCompositor* create() {
            return il2cpp::create_object<app::CVRCompositor>(get_class());
        }
    } // namespace CVRCompositor
} // namespace app::classes::types
