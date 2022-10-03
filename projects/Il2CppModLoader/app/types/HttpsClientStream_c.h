#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpsClientStream_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpsClientStream_c__Class** type_info;
        inline app::HttpsClientStream_c__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpsClientStream_c__Class>(type_info, "Mono.Security.Protocol.Tls", "HttpsClientStream", "<>c");
        }
        inline app::HttpsClientStream_c* create() {
            return il2cpp::create_object<app::HttpsClientStream_c>(get_class());
        }
    } // namespace HttpsClientStream_c
} // namespace app::classes::types
