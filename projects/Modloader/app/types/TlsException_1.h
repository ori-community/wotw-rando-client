#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TlsException_1 {
        inline app::TlsException_1__Class** type_info = (app::TlsException_1__Class**)(modloader::win::memory::resolve_rva(0x04747B60));
        inline app::TlsException_1__Class* get_class() {
            return il2cpp::get_class<app::TlsException_1__Class>(type_info, "Mono.Security.Interface", "TlsException");
        }
        inline app::TlsException_1* create() {
            return il2cpp::create_object<app::TlsException_1>(get_class());
        }
    } // namespace TlsException_1
} // namespace app::classes::types
