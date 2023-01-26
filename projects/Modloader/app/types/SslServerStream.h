#pragma once
#include <Modloader/app/structs/SslServerStream.h>
#include <Modloader/app/structs/SslServerStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SslServerStream {
        inline app::SslServerStream__Class** type_info() {
            static app::SslServerStream__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SslServerStream__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SslServerStream__Class* get_class() {
            return il2cpp::get_class<app::SslServerStream__Class>(type_info(), "Mono.Security.Protocol.Tls", "SslServerStream");
        }
        inline app::SslServerStream* create() {
            return il2cpp::create_object<app::SslServerStream>(get_class());
        }
    } // namespace SslServerStream
} // namespace app::classes::types
