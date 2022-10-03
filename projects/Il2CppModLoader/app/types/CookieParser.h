#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CookieParser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CookieParser__Class** type_info;
        inline app::CookieParser__Class* get_class() {
            return il2cpp::get_class<app::CookieParser__Class>(type_info, "System.Net", "CookieParser");
        }
        inline app::CookieParser* create() {
            return il2cpp::create_object<app::CookieParser>(get_class());
        }
    } // namespace CookieParser
} // namespace app::classes::types
