#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SslStreamBase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SslStreamBase__Class** type_info;
        inline app::SslStreamBase__Class* get_class() {
            return il2cpp::get_class<app::SslStreamBase__Class>(type_info, "Mono.Security.Protocol.Tls", "SslStreamBase");
        }
        inline app::SslStreamBase* create() {
            return il2cpp::create_object<app::SslStreamBase>(get_class());
        }
    } // namespace SslStreamBase
} // namespace app::classes::types
