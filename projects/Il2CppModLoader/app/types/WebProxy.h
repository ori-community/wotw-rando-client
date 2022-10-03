#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebProxy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebProxy__Class** type_info;
        inline app::WebProxy__Class* get_class() {
            return il2cpp::get_class<app::WebProxy__Class>(type_info, "System.Net", "WebProxy");
        }
        inline app::WebProxy* create() {
            return il2cpp::create_object<app::WebProxy>(get_class());
        }
    } // namespace WebProxy
} // namespace app::classes::types
