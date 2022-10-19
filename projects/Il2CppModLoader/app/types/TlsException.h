#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TlsException {
        inline app::TlsException__Class** type_info = (app::TlsException__Class**)(modloader::win::memory::resolve_rva(0x047821D0));
        inline app::TlsException__Class* get_class() {
            return il2cpp::get_class<app::TlsException__Class>(type_info, "Mono.Security.Protocol.Tls", "TlsException");
        }
        inline app::TlsException* create() {
            return il2cpp::create_object<app::TlsException>(get_class());
        }
    } // namespace TlsException
} // namespace app::classes::types
