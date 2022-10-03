#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebException__Class** type_info;
        inline app::WebException__Class* get_class() {
            return il2cpp::get_class<app::WebException__Class>(type_info, "System.Net", "WebException");
        }
        inline app::WebException* create() {
            return il2cpp::create_object<app::WebException>(get_class());
        }
    } // namespace WebException
} // namespace app::classes::types
