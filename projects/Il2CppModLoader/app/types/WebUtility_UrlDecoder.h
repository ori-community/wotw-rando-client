#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebUtility_UrlDecoder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebUtility_UrlDecoder__Class** type_info;
        inline app::WebUtility_UrlDecoder__Class* get_class() {
            return il2cpp::get_nested_class<app::WebUtility_UrlDecoder__Class>(type_info, "System.Net", "WebUtility", "UrlDecoder");
        }
        inline app::WebUtility_UrlDecoder* create() {
            return il2cpp::create_object<app::WebUtility_UrlDecoder>(get_class());
        }
    } // namespace WebUtility_UrlDecoder
} // namespace app::classes::types
