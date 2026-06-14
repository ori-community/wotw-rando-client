#pragma once
#include <Modloader/app/structs/SslHandshakeHash.h>
#include <Modloader/app/structs/SslHandshakeHash__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SslHandshakeHash {
        inline app::SslHandshakeHash__Class** type_info() {
            static app::SslHandshakeHash__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SslHandshakeHash__Class**)(modloader::win::memory::resolve_rva(0x047601D8));
            }
            return cache;
        }
        inline app::SslHandshakeHash__Class* get_class() {
            return il2cpp::get_class<app::SslHandshakeHash__Class>(type_info(), "Mono.Security.Protocol.Tls", "SslHandshakeHash");
        }
        inline app::SslHandshakeHash* create() {
            return il2cpp::create_object<app::SslHandshakeHash>(get_class());
        }
    } // namespace SslHandshakeHash
} // namespace app::classes::types
