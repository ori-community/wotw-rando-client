#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RSAManaged {
        inline app::RSAManaged__Class** type_info = (app::RSAManaged__Class**)(modloader::win::memory::resolve_rva(0x04750278));
        inline app::RSAManaged__Class* get_class() {
            return il2cpp::get_class<app::RSAManaged__Class>(type_info, "Mono.Security.Cryptography", "RSAManaged");
        }
        inline app::RSAManaged* create() {
            return il2cpp::create_object<app::RSAManaged>(get_class());
        }
    } // namespace RSAManaged
} // namespace app::classes::types
