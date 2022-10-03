#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TlsStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TlsStream__Class** type_info;
        inline app::TlsStream__Class* get_class() {
            return il2cpp::get_class<app::TlsStream__Class>(type_info, "Mono.Security.Protocol.Tls", "TlsStream");
        }
        inline app::TlsStream* create() {
            return il2cpp::create_object<app::TlsStream>(get_class());
        }
    } // namespace TlsStream
} // namespace app::classes::types
