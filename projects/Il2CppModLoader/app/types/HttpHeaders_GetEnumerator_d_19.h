#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpHeaders_GetEnumerator_d_19 {
        inline app::HttpHeaders_GetEnumerator_d_19__Class** type_info = (app::HttpHeaders_GetEnumerator_d_19__Class**)(modloader::win::memory::resolve_rva(0x04748EA0));
        inline app::HttpHeaders_GetEnumerator_d_19__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpHeaders_GetEnumerator_d_19__Class>(type_info, "System.Net.Http.Headers", "HttpHeaders", "<GetEnumerator>d__19");
        }
        inline app::HttpHeaders_GetEnumerator_d_19* create() {
            return il2cpp::create_object<app::HttpHeaders_GetEnumerator_d_19>(get_class());
        }
    } // namespace HttpHeaders_GetEnumerator_d_19
} // namespace app::classes::types
