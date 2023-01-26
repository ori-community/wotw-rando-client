#pragma once
#include <Modloader/app/structs/SslStreamBase_AsyncHandshakeDelegate.h>
#include <Modloader/app/structs/SslStreamBase_AsyncHandshakeDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SslStreamBase_AsyncHandshakeDelegate {
        inline app::SslStreamBase_AsyncHandshakeDelegate__Class** type_info() {
            static app::SslStreamBase_AsyncHandshakeDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SslStreamBase_AsyncHandshakeDelegate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SslStreamBase_AsyncHandshakeDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::SslStreamBase_AsyncHandshakeDelegate__Class>(type_info(), "Mono.Security.Protocol.Tls", "SslStreamBase", "AsyncHandshakeDelegate");
        }
        inline app::SslStreamBase_AsyncHandshakeDelegate* create() {
            return il2cpp::create_object<app::SslStreamBase_AsyncHandshakeDelegate>(get_class());
        }
    } // namespace SslStreamBase_AsyncHandshakeDelegate
} // namespace app::classes::types
