#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SslClientStream {
        namespace {
            inline app::SslClientStream__Class* type_info_ref = nullptr;
        }
        inline app::SslClientStream__Class** type_info = &type_info_ref;
        inline app::SslClientStream__Class* get_class() {
            return il2cpp::get_class<app::SslClientStream__Class>(type_info, "Mono.Security.Protocol.Tls", "SslClientStream");
        }
        inline app::SslClientStream* create() {
            return il2cpp::create_object<app::SslClientStream>(get_class());
        }
    } // namespace SslClientStream
} // namespace app::classes::types
