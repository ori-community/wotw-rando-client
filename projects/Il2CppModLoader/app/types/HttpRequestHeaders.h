#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpRequestHeaders {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpRequestHeaders__Class** type_info;
        inline app::HttpRequestHeaders__Class* get_class() {
            return il2cpp::get_class<app::HttpRequestHeaders__Class>(type_info, "System.Net.Http.Headers", "HttpRequestHeaders");
        }
        inline app::HttpRequestHeaders* create() {
            return il2cpp::create_object<app::HttpRequestHeaders>(get_class());
        }
    } // namespace HttpRequestHeaders
} // namespace app::classes::types
