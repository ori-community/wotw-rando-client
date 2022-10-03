#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpHeaders {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpHeaders__Class** type_info;
        inline app::HttpHeaders__Class* get_class() {
            return il2cpp::get_class<app::HttpHeaders__Class>(type_info, "System.Net.Http.Headers", "HttpHeaders");
        }
        inline app::HttpHeaders* create() {
            return il2cpp::create_object<app::HttpHeaders>(get_class());
        }
    } // namespace HttpHeaders
} // namespace app::classes::types
