#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SslClientStream_NegotiateAsyncResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SslClientStream_NegotiateAsyncResult__Class** type_info;
        inline app::SslClientStream_NegotiateAsyncResult__Class* get_class() {
            return il2cpp::get_nested_class<app::SslClientStream_NegotiateAsyncResult__Class>(type_info, "Mono.Security.Protocol.Tls", "SslClientStream", "NegotiateAsyncResult");
        }
        inline app::SslClientStream_NegotiateAsyncResult* create() {
            return il2cpp::create_object<app::SslClientStream_NegotiateAsyncResult>(get_class());
        }
    } // namespace SslClientStream_NegotiateAsyncResult
} // namespace app::classes::types
