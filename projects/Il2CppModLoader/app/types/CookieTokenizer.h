#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CookieTokenizer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CookieTokenizer__Class** type_info;
        inline app::CookieTokenizer__Class* get_class() {
            return il2cpp::get_class<app::CookieTokenizer__Class>(type_info, "System.Net", "CookieTokenizer");
        }
        inline app::CookieTokenizer* create() {
            return il2cpp::create_object<app::CookieTokenizer>(get_class());
        }
    } // namespace CookieTokenizer
} // namespace app::classes::types
