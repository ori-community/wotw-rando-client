#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TlsClientFinished_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TlsClientFinished_1__Class** type_info;
        inline app::TlsClientFinished_1__Class* get_class() {
            return il2cpp::get_class<app::TlsClientFinished_1__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Client", "TlsClientFinished");
        }
        inline app::TlsClientFinished_1* create() {
            return il2cpp::create_object<app::TlsClientFinished_1>(get_class());
        }
    } // namespace TlsClientFinished_1
} // namespace app::classes::types
