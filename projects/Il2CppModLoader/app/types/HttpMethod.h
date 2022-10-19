#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpMethod {
        inline app::HttpMethod__Class** type_info = (app::HttpMethod__Class**)(modloader::win::memory::resolve_rva(0x04726B58));
        inline app::HttpMethod__Class* get_class() {
            return il2cpp::get_class<app::HttpMethod__Class>(type_info, "System.Net.Http", "HttpMethod");
        }
        inline app::HttpMethod* create() {
            return il2cpp::create_object<app::HttpMethod>(get_class());
        }
    } // namespace HttpMethod
} // namespace app::classes::types
