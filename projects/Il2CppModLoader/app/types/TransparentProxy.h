#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransparentProxy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TransparentProxy__Class** type_info;
        inline app::TransparentProxy__Class* get_class() {
            return il2cpp::get_class<app::TransparentProxy__Class>(type_info, "System.Runtime.Remoting.Proxies", "TransparentProxy");
        }
        inline app::TransparentProxy* create() {
            return il2cpp::create_object<app::TransparentProxy>(get_class());
        }
    } // namespace TransparentProxy
} // namespace app::classes::types
