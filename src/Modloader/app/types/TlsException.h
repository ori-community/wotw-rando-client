#pragma once
#include <Modloader/app/structs/TlsException.h>
#include <Modloader/app/structs/TlsException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TlsException {
        inline app::TlsException__Class** type_info() {
            static app::TlsException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TlsException__Class**)(modloader::win::memory::resolve_rva(0x047821D0));
            }
            return cache;
        }
        inline app::TlsException__Class* get_class() {
            return il2cpp::get_class<app::TlsException__Class>(type_info(), "Mono.Security.Protocol.Tls", "TlsException");
        }
        inline app::TlsException* create() {
            return il2cpp::create_object<app::TlsException>(get_class());
        }
    } // namespace TlsException
} // namespace app::classes::types
