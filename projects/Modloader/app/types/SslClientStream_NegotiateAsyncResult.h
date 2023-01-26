#pragma once
#include <Modloader/app/structs/SslClientStream_NegotiateAsyncResult.h>
#include <Modloader/app/structs/SslClientStream_NegotiateAsyncResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SslClientStream_NegotiateAsyncResult {
        inline app::SslClientStream_NegotiateAsyncResult__Class** type_info() {
            static app::SslClientStream_NegotiateAsyncResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SslClientStream_NegotiateAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x0471E150));
            }
            return cache;
        }
        inline app::SslClientStream_NegotiateAsyncResult__Class* get_class() {
            return il2cpp::get_nested_class<app::SslClientStream_NegotiateAsyncResult__Class>(type_info(), "Mono.Security.Protocol.Tls", "SslClientStream", "NegotiateAsyncResult");
        }
        inline app::SslClientStream_NegotiateAsyncResult* create() {
            return il2cpp::create_object<app::SslClientStream_NegotiateAsyncResult>(get_class());
        }
    } // namespace SslClientStream_NegotiateAsyncResult
} // namespace app::classes::types
