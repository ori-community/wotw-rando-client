#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RSAManaged_1 {
        inline app::RSAManaged_1__Class** type_info = (app::RSAManaged_1__Class**)(modloader::win::memory::resolve_rva(0x04726908));
        inline app::RSAManaged_1__Class* get_class() {
            return il2cpp::get_class<app::RSAManaged_1__Class>(type_info, "Mono.Security.Cryptography", "RSAManaged");
        }
        inline app::RSAManaged_1* create() {
            return il2cpp::create_object<app::RSAManaged_1>(get_class());
        }
    } // namespace RSAManaged_1
} // namespace app::classes::types
