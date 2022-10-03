#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpStreamAsyncResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpStreamAsyncResult__Class** type_info;
        inline app::HttpStreamAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::HttpStreamAsyncResult__Class>(type_info, "System.Net", "HttpStreamAsyncResult");
        }
        inline app::HttpStreamAsyncResult* create() {
            return il2cpp::create_object<app::HttpStreamAsyncResult>(get_class());
        }
    } // namespace HttpStreamAsyncResult
} // namespace app::classes::types
