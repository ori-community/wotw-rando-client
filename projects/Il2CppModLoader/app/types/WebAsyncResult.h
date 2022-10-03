#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebAsyncResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebAsyncResult__Class** type_info;
        inline app::WebAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::WebAsyncResult__Class>(type_info, "System.Net", "WebAsyncResult");
        }
        inline app::WebAsyncResult* create() {
            return il2cpp::create_object<app::WebAsyncResult>(get_class());
        }
    } // namespace WebAsyncResult
} // namespace app::classes::types
