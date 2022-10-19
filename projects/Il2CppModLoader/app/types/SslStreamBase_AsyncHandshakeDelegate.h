#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SslStreamBase_AsyncHandshakeDelegate {
        namespace {
            inline app::SslStreamBase_AsyncHandshakeDelegate__Class* type_info_ref = nullptr;
        }
        inline app::SslStreamBase_AsyncHandshakeDelegate__Class** type_info = &type_info_ref;
        inline app::SslStreamBase_AsyncHandshakeDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::SslStreamBase_AsyncHandshakeDelegate__Class>(type_info, "Mono.Security.Protocol.Tls", "SslStreamBase", "AsyncHandshakeDelegate");
        }
        inline app::SslStreamBase_AsyncHandshakeDelegate* create() {
            return il2cpp::create_object<app::SslStreamBase_AsyncHandshakeDelegate>(get_class());
        }
    } // namespace SslStreamBase_AsyncHandshakeDelegate
} // namespace app::classes::types
