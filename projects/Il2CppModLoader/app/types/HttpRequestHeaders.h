#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpRequestHeaders {
        inline app::HttpRequestHeaders__Class** type_info = (app::HttpRequestHeaders__Class**)(modloader::win::memory::resolve_rva(0x04731D48));
        inline app::HttpRequestHeaders__Class* get_class() {
            return il2cpp::get_class<app::HttpRequestHeaders__Class>(type_info, "System.Net.Http.Headers", "HttpRequestHeaders");
        }
        inline app::HttpRequestHeaders* create() {
            return il2cpp::create_object<app::HttpRequestHeaders>(get_class());
        }
    } // namespace HttpRequestHeaders
} // namespace app::classes::types
