#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpContentHeaders {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpContentHeaders__Class** type_info;
        inline app::HttpContentHeaders__Class* get_class() {
            return il2cpp::get_class<app::HttpContentHeaders__Class>(type_info, "System.Net.Http.Headers", "HttpContentHeaders");
        }
        inline app::HttpContentHeaders* create() {
            return il2cpp::create_object<app::HttpContentHeaders>(get_class());
        }
    } // namespace HttpContentHeaders
} // namespace app::classes::types
