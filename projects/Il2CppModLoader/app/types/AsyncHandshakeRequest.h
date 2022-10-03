#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsyncHandshakeRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AsyncHandshakeRequest__Class** type_info;
        inline app::AsyncHandshakeRequest__Class* get_class() {
            return il2cpp::get_class<app::AsyncHandshakeRequest__Class>(type_info, "Mono.Net.Security", "AsyncHandshakeRequest");
        }
        inline app::AsyncHandshakeRequest* create() {
            return il2cpp::create_object<app::AsyncHandshakeRequest>(get_class());
        }
    } // namespace AsyncHandshakeRequest
} // namespace app::classes::types
