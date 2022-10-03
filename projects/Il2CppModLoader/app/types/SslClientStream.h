#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SslClientStream {
        namespace {
            app::SslClientStream__Class* type_info_ref = nullptr;
        }
        app::SslClientStream__Class** type_info = &type_info_ref;
        inline app::SslClientStream__Class* get_class() {
            return il2cpp::get_class<app::SslClientStream__Class>(type_info, "Mono.Security.Protocol.Tls", "SslClientStream");
        }
        inline app::SslClientStream* create() {
            return il2cpp::create_object<app::SslClientStream>(get_class());
        }
    } // namespace SslClientStream
} // namespace app::classes::types
