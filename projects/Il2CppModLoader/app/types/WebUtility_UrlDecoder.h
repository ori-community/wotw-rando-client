#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebUtility_UrlDecoder {
        inline app::WebUtility_UrlDecoder__Class** type_info = (app::WebUtility_UrlDecoder__Class**)(modloader::win::memory::resolve_rva(0x04759950));
        inline app::WebUtility_UrlDecoder__Class* get_class() {
            return il2cpp::get_nested_class<app::WebUtility_UrlDecoder__Class>(type_info, "System.Net", "WebUtility", "UrlDecoder");
        }
        inline app::WebUtility_UrlDecoder* create() {
            return il2cpp::create_object<app::WebUtility_UrlDecoder>(get_class());
        }
    } // namespace WebUtility_UrlDecoder
} // namespace app::classes::types
