#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpRequestException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpRequestException__Class** type_info;
        inline app::HttpRequestException__Class* get_class() {
            return il2cpp::get_class<app::HttpRequestException__Class>(type_info, "System.Net.Http", "HttpRequestException");
        }
        inline app::HttpRequestException* create() {
            return il2cpp::create_object<app::HttpRequestException>(get_class());
        }
    } // namespace HttpRequestException
} // namespace app::classes::types
