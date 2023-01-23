#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SslServerStream__Class.h>
#include <Modloader/app/structs/SslServerStream.h>

namespace app::classes::types {
    namespace SslServerStream {
        namespace {
            inline app::SslServerStream__Class* type_info_ref = nullptr;
        }
        inline app::SslServerStream__Class** type_info = &type_info_ref;
        inline app::SslServerStream__Class* get_class() {
            return il2cpp::get_class<app::SslServerStream__Class>(type_info, "Mono.Security.Protocol.Tls", "SslServerStream");
        }
        inline app::SslServerStream* create() {
            return il2cpp::create_object<app::SslServerStream>(get_class());
        }
    } // namespace SslServerStream
} // namespace app::classes::types
