#pragma once
#include <Modloader/app/structs/SslClientStream.h>
#include <Modloader/app/structs/SslClientStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SslClientStream {
        inline app::SslClientStream__Class** type_info() {
            static app::SslClientStream__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SslClientStream__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SslClientStream__Class* get_class() {
            return il2cpp::get_class<app::SslClientStream__Class>(type_info(), "Mono.Security.Protocol.Tls", "SslClientStream");
        }
        inline app::SslClientStream* create() {
            return il2cpp::create_object<app::SslClientStream>(get_class());
        }
    } // namespace SslClientStream
} // namespace app::classes::types
